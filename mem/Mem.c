#include <stdio.h>

/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){

    // decimals use: 0 -9 (1, 2, 3, 4, 5, 6, 7, 8, 9)
    // hexadecimal use: 0 -9 + A -F (0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F)

    //memory = an array of bytes within RAM (street)
    //memory block = a single unit (byte) within memory, used to hold some value (person? :) )
    //memory adress = the address where a memory block is located (house address lol)

    /*
    Bytes Adress of A B C: 
    A Bytes Value: 1
    B Bytes Value: 1
    C Bytes Value: 1

    HEX Adress of A B C:
    A HEX Value: 0000003ebf5ffa2f
    B HEX Value: 0000003ebf5ffa2e
    C HEX Value: 0000003ebf5ffa2d
    
    */

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("Bytes Adress of A B C: \n");
    printf("A Bytes Value: %-12d\n", sizeof(a));
    printf("B Bytes Value: %-12d\n", sizeof(b));
    printf("C Bytes Value: %-12d\n", sizeof(c));
    printf("\n");

    printf("HEX Adress of A B C: \n");
    printf("A HEX Value: %p\n", &a);
    printf("B HEX Value: %p\n", &b);
    printf("C HEX Value: %p\n", &c);

    return 0;
}