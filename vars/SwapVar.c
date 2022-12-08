#include <stdio.h>
#include <string.h>

/*
 *   Learning C Exercise
 *   @lmrapha
 */

int main()
{

    char x[15] = "wine";
    char y[15] = "water";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    /*
        temp = x;
        x = y;
        y = temp;
    */

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}