#include <stdio.h>

struct Student {
    char name[12];
    float gpa;
};

/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){

    struct Student student1 = {"Bob", 3.0};
    struct Student student2 = {"Olga", 2.5};
    struct Student student3 = {"Ulive", 4.0};
    struct Student student4 = {"Jake", 2.0};
    struct Student student5 = {"Ania", 6.0};

    struct Student students[] = {student1, student2, student3, student4, student5};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++) {
        printf("Student Name: %-12s\t", students[i].name);
        printf("Student GPA: %.1f\n", students[i].gpa);
    }

    return 0;
}