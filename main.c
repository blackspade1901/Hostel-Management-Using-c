#include <stdio.h>
#include "student.h"
#include "hostel.h"
#include "invoice.h"
#include "menu.h"
#include "utils.h"

int main() {
    Student students[100];
    int studentCount = loadData(students);

    int choice;
    while (1) {
        printf("\n===== HOSTEL MANAGEMENT SYSTEM =====\n");
        printf("1. Register Student\n");
        printf("2. Allocate Room\n");
        printf("3. View Hostel Info\n");
        printf("4. View All Students\n");
        printf("5. Generate Invoice\n");
        printf("6. Remove Student\n");
        printf("7. View Food Menu\n");
        printf("8. Search Students by Hostel\n");
        printf("9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: registerStudent(students, &studentCount); break;
            case 2: assignRoom(students, studentCount); break;
            case 3: showHostelStatus(); break;
            case 4: viewAllStudents(students, studentCount); break;
            case 5: generateInvoice(students, studentCount); break;
            case 6: removeStudent(students, &studentCount); break;
            case 7: showMenu(); break;
            case 8: searchStudentsByHostel(students, studentCount); break;
            case 9: 
                saveData(students, studentCount);
                printf("Goodbye!\n");
                return 0;
            default: printf("Invalid choice.\n");
        }
    }
}
