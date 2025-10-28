#include <stdio.h>
#include "invoice.h"

void generateInvoice(Student *list, int count) {
    int id;
    printf("Enter Student ID for invoice: ");
    scanf("%d", &id);

    if (id < 1 || id > count) {
        printf("Invalid ID.\n");
        return;
    }

    Student s = list[id - 1];
    float baseRate = 2000;
    float total = baseRate * s.months;
    float tax = total * 0.05;
    float grandTotal = total + tax;

    printf("\n--- Invoice ---\n");
    printf("Name: %s\nDepartment: %s\nHostel: %d | Room: %d\nMonths: %d\n",
           s.name, s.department, s.hostelNo, s.roomNo, s.months);
    printf("Base Fee: %.2f\nTax: %.2f\nTotal: %.2f\n", total, tax, grandTotal);
}
