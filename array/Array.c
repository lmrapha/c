#include <stdio.h>

/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){

    double prices[5]; //{5.0, 10.0, 15.0, 20.0, 25.0};

    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 20.0;
    prices[4] = 25.0;
    prices[5] = 30.0;

    printf("$%.2lf", prices[5]);

    return 0;
}