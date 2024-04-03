#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

Student studentCreate(char *name, char *number, int grade) {
    Student student;

    strcpy(student.name, name);
    strcpy(student.number, number);
    student.grade = grade;

    return student;
}

