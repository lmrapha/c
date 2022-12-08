#include <stdio.h>

enum Seasons{Spring = 0, Summer = 1, Fall = 2, Winter = 3};

/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){

    enum Seasons actualSeason = Summer;

    printf("%d\n", actualSeason);

    return 0;
}