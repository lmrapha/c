#include <stdio.h>

void printAge(int *pAge) {
    printf("You are %d years old", *pAge); // to pass the pointer, dereference
}

/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){

    /*
    Address of Age: 000000d4b47ff7f4
    Value of pAge: 000000d4b47ff7f4
    Size of Age: 4 bytes
    Size of pAge: 8 bytes
    Value of Age: 19
    Value at stored address: 19
    */

    int age = 19;
    // you can't declare and initialize a pointer in two steps
    // should be good if asign a NULL value to a pointer
    //&age // NULL
    int *pAge = NULL; //pointer data type should be consistent with the variable type.
    pAge = &age;

    /*
    printf("Address of Age: %p\n", &age);
    printf("Value of pAge: %p\n", pAge);

    printf("Size of Age: %d bytes\n", sizeof(age));
    printf("Size of pAge: %d bytes\n", sizeof(pAge));

    printf("Value of Age: %d\n", age);
    printf("Value at stored address: %d\n", *pAge); //dereferencing
    */

    printAge(pAge);

    return 0;
}