#include <stdio.h>
#include <string.h>

int main() {
    int numStudents = 4;
    int maxCourses = 10;

    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};
    char courses[4][10][20] = {{"Math", "Physics", "Chemistry"},{"Biology", "History"},
    {"Math", "Physics", "ComputerScience", "English"},{"Economics", "Math", "Physics"}};
    int courseCount[4] = {3, 2, 4, 3};

    printf(" Students and their registered courses \n");
    for(int i = 0; i < numStudents; i++) {
        printf("%s : ", students[i]);
        for(int j = 0; j < courseCount[i]; j++) {
            printf("%s", courses[i][j]);
            if (j != courseCount[i] - 1){ 
                printf(", ");
            }    
        }
        printf("\n");
    }

    char searchCourse[20];
    printf("\nEnter course to find students: ");
    scanf("%s", searchCourse);

    printf("%s: ", searchCourse);
    int found = 0;
    for(int i = 0; i < numStudents; i++) {
        for(int j = 0; j < courseCount[i]; j++) {
            if(strcmp(courses[i][j], searchCourse) == 0) {
                printf("%s ", students[i]);
                found = 1;
                break;
            }
        }
    }
    if(!found){
        printf("None");
    }    
    printf("\n");

    printf("\nOverloaded students\n");
    for(int i = 0; i < numStudents; i++) {
        if(courseCount[i] > 3) {
            printf("%s is overloaded with %d courses\n", students[i], courseCount[i]);
        }
    }

    return 0;
}
