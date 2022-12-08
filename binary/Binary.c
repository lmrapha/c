#include <stdio.h>

/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){

    /*

    Equivalent operator 
   ___________________
  |_BITWISE | LOGICAL_|
     | a & b|a && b |
     | a | b|a || b |
     | a ^ b|a != b |
     |   ~a |  !a   |
     |______________|

    */

    int x = 19; // 19 = 00010011
    int y = 5; //  5  = 00000101
    int z = 29; // 29 = 00011101

    z = x & y;

    printf("AND = %d\n", z);

    z = x | y;

    printf("OR = %d\n", z);

    z = x ^ y;

    printf("XOR = %d\n", z);

     z = x << y;

    printf("LSHIFT = %d\n", z);

     z = x >> y;

    printf("RSHIFT = %d\n", z);

    return 0;
}