#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

Student students[MAX_STUDENTS];
int num_students = 0;

void add_student(int id, const char *name, const char *course, int age, float gpa);
void list_students();
Student* find_student(int id); // Helper function
void update_student(int id, const char *name, const char *course, int age, float gpa);
void delete_student(int id);