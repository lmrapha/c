#include <stdio.h>
#include <ctype.h>

/*
*   Learning C Exercise
*   @lmrapha
*/

int main() {

    char unit;
    float temp;
    
    printf("\nIs the temperature in (F) or (C)?\n");
    scanf("%c", &unit);

     unit = toupper(unit);

    if(unit == 'C') {
         printf("\n Enter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in Fahrenheit is: %.1f !", temp);
    } 
    else if (unit == 'F') {
        printf("\n Enter the temperature in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;

        printf("\nThe temperature in Celsius is: %.1f !", temp);
    }
    else {
        printf("\n %c is not a valid value of measurement!", unit);
    }
    return 0;
}