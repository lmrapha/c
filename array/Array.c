#include <stdio.h>

/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){

    //double prices[5]; //{5.0, 10.0, 15.0, 20.0, 25.0};
    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0, 40.0, 30.0};

    /*
    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 20.0;
    prices[4] = 25.0;
    prices[5] = 60.0;
    */

    //fixed value
    //printf("$%.2lf", prices[5]);
    
    //printf("%d bytes \n", sizeof(prices));

    //print the array size
    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) {
        printf("$%.2lf\n", prices[i]);
    }

    // fixed value of array
    /*
    for(int i = 0; i < 5; i++) {
        printf("$%.2lf\n", prices[i]);
    }
    */

    return 0;
}