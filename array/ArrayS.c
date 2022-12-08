#include <stdio.h>
#include <string.h>

/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){

    // string arrays
    char brands[][10] = {"Moschino", "Valentino", "Prada", "Jacquemus", "Gucci", "Chanel", "Celine", "YSL", "Versace"};

    // replacing a array with another value
    
    //strcpy(brands[0], "Dior");

    for(int i = 0; i < sizeof(brands)/sizeof(brands[0]); i++) {
        printf("%s\n", brands[i]);
    }

    return 0;
}