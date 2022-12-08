#include <stdio.h>

/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){

    for(int i = 1; i <= 20; i++){
        if(i == 16){    
            break; //or to force the next iteration of the loop continue; break just break lol?
        }
        printf("%d\n", i);
    }

    return 0;
}