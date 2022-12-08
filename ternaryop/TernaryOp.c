#include <stdio.h>

/*
*   Learning C Exercise
*   @lmrapha
*/

int findMax(int x, int y) {
    if(x > y){
        return x;
    } else {
        return y;
    }
    return  (x > y) ? x : y;
}

int main(){

    int max = findMax(7, 4);

    printf("%d", max);


    return 0;
}