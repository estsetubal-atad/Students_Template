#include <stdio.h> 
#include <stdlib.h>
#include "student.h"
#include "input.h"

int main() {
   
    Student students[200];

    int n = loadStudents(students, 60);

    for(int i=0; i < n; i++) {
        printf("Student[%2d]: %s \n", i, students[i].name);
    }

    return EXIT_SUCCESS;
}
