#include <stdio.h>
#include <string.h>
#include "student.h"
#include "hostel.h"
#include "invoice.h"
#include "utils.h"

void registerStudent(Student *list, int *count)
{
    Student s;
    s.id = *count + 1;
    printf("\nRegistering for Student ID: %d\n", s.id); 

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Gender: ");
    scanf("%s", s.gender);
    printf("Enter Department: ");
    scanf("%s", s.department);
    printf("Enter Months Staying: ");
    scanf("%d", &s.months);
    printf("Enter Contact: ");
    scanf("%s", s.contact);

    s.hostelNo = 0;
    s.roomNo = 0;
    s.feesPaid = 0;

    list[*count] = s;
    (*count)++;
    printf("Student registered successfully! (ID: %d)\n", s.id); 
}


void assignRoom(Student *list, int count)
{
    int id;
    printf("Enter Student ID to allocate room: ");
    scanf("%d", &id);

    if (id < 1 || id > count)
    {
        printf("Invalid ID.\n");
        return;
    }

    int hostelNo, roomNo;
    printf("Enter Hostel Number: ");
    scanf("%d", &hostelNo);
    roomNo = getAvailableRoom(hostelNo);

    if (roomNo == -1)
    {
        printf("No rooms available in Hostel %d.\n", hostelNo);
        return;
    }

    list[id - 1].hostelNo = hostelNo;
    list[id - 1].roomNo = roomNo;

    printf("Room allocated successfully (Hostel %d, Room %d).\n", hostelNo, roomNo);
}

void viewAllStudents(Student *list, int count)
{
    printf("\n--- All Students ---\n");
    if (count == 0)
    {
        printf("No students registered yet.\n");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        printf("ID:%d | Name:%s | Dept:%s | Hostel:%d | Room:%d | Months:%d\n",
               list[i].id, list[i].name, list[i].department,
               list[i].hostelNo, list[i].roomNo, list[i].months);
    }
}

void removeStudent(Student *list, int *count)
{
    int id;
    printf("Enter Student ID to remove: ");
    scanf("%d", &id);

    if (id < 1 || id > *count)
    {
        printf("Invalid ID.\n");
        return;
    }

    int hostel = list[id - 1].hostelNo;
    int room = list[id - 1].roomNo;
    if (hostel != 0)
        updateRoomStatus(hostel, room, 0);

    for (int i = id - 1; i < *count - 1; i++)
    {
        list[i] = list[i + 1];
        list[i].id = i + 1;
    }
    (*count)--;

    printf("Student removed successfully!\n");
}

void searchStudentsByHostel(Student *list, int count)
{
    if (count == 0)
    {
        printf("\nNo student records available.\n");
        return;
    }

    int hostelNo;
    printf("\nEnter Hostel Number to search: ");
    scanf("%d", &hostelNo);

    printf("\n--- Students in Hostel %d ---\n", hostelNo);
    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (list[i].hostelNo == hostelNo)
        {
            printf("ID:%d | Name:%s | Room:%d | Dept:%s | Contact:%s\n",
                   list[i].id, list[i].name, list[i].roomNo,
                   list[i].department, list[i].contact);
            found = 1;
        }
    }

    if (!found)
        printf("No students found in Hostel %d.\n", hostelNo);
}
