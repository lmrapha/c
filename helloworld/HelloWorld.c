#include <stdio.h>

/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){


    /* 

    \a = alert
    \b = backspace
    \e = escape character
    \f = formfeed page break
    \n  = newline (line feed)
    \t = horizontal tab
    \v = vertical tab
    \\ = backslash 
    \* = apostrophe or single quotation mark
    \" = double quotation mark
    \? = question mark (used to avoid trigraphs)
    \nnn = The byte whose numerical value is given by nnn interpreted as an octal number
    \xhh…	any	The byte whose numerical value is given by hh… interpreted as a hexadecimal number
    \uhhhhnote 3	none	Unicode code point below 10000 hexadecimal (added in C99)[1]: 26 
    \Uhhhhhhhhnote 4	none	Unicode code point where h is a hexadecimal digit
    
    */

    printf("Hello world!\nI'm learning C!\n");

    // a line with numbers
    printf("\n1\t2\t3\t4\t5\t6\t7\t8\t9\n");

    // a grid with numbers
    printf("\n1\t2\t3\n4\t5\t6\n7\t8\t9");

    return 0;
}