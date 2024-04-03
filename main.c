#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "student.h"
#include "input.h"

/**
 * @brief Populates array with students.
 * 
 * The function returns how many students were actually populated.
 * This is important if 'howMany' is greater than available students.
 * 
 * Should use the return value to iterate the array afterwards.
 * 
 * @param arr [out] array of students to populate. Must have necessary space.
 * @param howMany [in] number of students to load
 * @return int actually number of populated students.
 */
int loadStudents(Student arr[], int howMany);

/**
 * @brief Program entry point
 * 
 * @return error code. 0 - success. 
 */
int main() {
   
    Student students[200];

    int n = loadStudents(students, 60);

    for(int i=0; i < n; i++) {
        printf("Student[%2d]: %s \n", i, students[i].name);
    }

    return EXIT_SUCCESS;
}

int loadStudents(Student arr[], int howMany) {

    FILE* stream = fopen("students.csv", "r");

    int count = 0;
    char line[1024];
    while (fgets(line, 1024, stream))
    {
        if(count == howMany) break;

        char* tmp = strdup(line);
        
        char** tokens = splitString(tmp, 3, ";");
        
        int grade = atoi(tokens[2]);
        arr[count++] = studentCreate(tokens[0], tokens[1], grade);

	    free(tokens);
        free(tmp);
    }

    fclose(stream);

    return count;
}
