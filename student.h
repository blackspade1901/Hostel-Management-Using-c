#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    int id;
    char name[50];
    char gender[10];
    char department[30];
    int months;
    char contact[15];
    int hostelNo;
    int roomNo;
    float feesPaid;
} Student;

void registerStudent(Student *list, int *count);
void assignRoom(Student *list, int count);
void viewAllStudents(Student *list, int count);
void removeStudent(Student *list, int *count);
void searchStudentsByHostel(Student *list, int count);

#endif
