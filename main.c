#include <stdio.h>
#include "student.h"

int main() {
    int choice;

    // Load data (if implemented)

    do {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. List Students\n");
        printf("3. Find Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int id, age;
                char name[MAX_NAME_LENGTH], course[MAX_COURSE_LENGTH];
                float gpa;

                printf("Enter student ID: ");
                scanf("%d", &id);
                printf("Enter student name: ");
                scanf(" %[^\n]s", name);
                printf("Enter student course: ");
                scanf(" %[^\n]s", course);
                printf("Enter student age: ");
                scanf("%d", &age);
                printf("Enter student GPA: ");
                scanf("%f", &gpa);

                add_student(id, name, course, age, gpa);
                break;
            }
            case 2:
                list_students();
                break;
            case 3: {
                int id;
                printf("Enter student ID to find: ");
                scanf("%d", &id);
                find_student(id);
                break;
            }
            case 4: {
                int id, age;
                char name[MAX_NAME_LENGTH], course[MAX_COURSE_LENGTH];
                float gpa;

                printf("Enter student ID to update: ");
                scanf("%d", &id);
                printf("Enter new student name (or press Enter to keep current): ");
                scanf(" %[^\n]s", name);
                printf("Enter new student course (or press Enter to keep current): ");
                scanf(" %[^\n]s", course);
                printf("Enter new student age (or -1 to keep current): ");
                scanf("%d", &age);
                printf("Enter new student GPA (or -1 to keep current): ");
                scanf("%f", &gpa);

                update_student(id, name, course, age, gpa);
                break;
            }
            case 5: {
                int id;
                printf("Enter student ID to delete: ");
                scanf("%d", &id);
                delete_student(id);
                break;
            }
            case 0:
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice!= 0);

    // Save data (if implemented)
    return 0;
}