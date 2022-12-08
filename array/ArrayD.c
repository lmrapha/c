#include <stdio.h>

/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){

    // 2d arrays

    /*
    int numbers[3][3] = {
                        {1, 2, 3},
                        {4, 5, 6},
                        {7, 9, 10}
                        };
    */

    int numbers[3][3];

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[1][3] = 7;
    numbers[1][4] = 8;
    numbers[1][5] = 9;
    numbers[1][6] = 10;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}