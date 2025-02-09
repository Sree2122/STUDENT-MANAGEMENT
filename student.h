#ifndef STUDENT_H
#define STUDENT_H

#define MAX_NAME_LENGTH 50
#define MAX_COURSE_LENGTH 50

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    char course[MAX_COURSE_LENGTH];
    int age;
    float gpa;
} Student;

#endif