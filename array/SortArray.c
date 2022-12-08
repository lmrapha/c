#include <stdio.h>

void sortC(char array[], int sizeC) {

    for(int i = 0; i < sizeC - 1; i++) {
        for(int j = 0; j < sizeC - i - 1; j++) {
            // < reverse the array
        if (array[j] > array[j+1]) {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            }
        }
    }
}

/*
void sort(int array[], int size) {

    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            // < reverse the array
        if (array[j] > array[j+1]) {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            }
        }
    }
}
*/

void printArrayC(char array[], int sizeC) {
    for(int i = 0; i < sizeC; i++){
        printf("%c ", array[i]);
    }
}

/*
void printArray(int array[], int size) {
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}
*/

/*
*   Learning C Exercise
*   @lmrapha
*/

int main() {

    //int array[] = {9, 2, 3, 4, 5, 1, 6, 7, 10, 8, 11};

    char array[] = {'B','S','T','P','E'};

    //int size = sizeof(array) / sizeof(array[0]);
    int sizeC = sizeof(array) / sizeof(array[0]);

    //sort(array, size);
    //printArray(array, size);

    sortC(array, sizeC);
    printArrayC(array, sizeC);

    return 0;
}