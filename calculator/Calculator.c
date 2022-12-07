#include <stdio.h>

/*
*   Learning C Exercise
*   @lmrapha
*/

int main() {

    char operator;
    double n1;
    double n2;
    double result;

    printf("\nPlease enter an operator! OPTIONS:\n(+ Addition)(- Subtraction)(* Multiplication)(/ Division): ");
    scanf("%c", &operator);

    printf("Enter Number One: ");
    scanf("%lf", &n1);

    printf("Enter Number Two: ");
    scanf("%lf", &n2);

    switch(operator) {
        default:
            printf("%c is not a valid operator!", operator);
            break;
        case '+':
            result = n1 + n2;
            printf("\nResult: %.2lf", result);
            break;
        case '-':
            result = n1 - n2;
            printf("\nResult: %.2lf", result);
            break;
        case '*':
            result = n1 * n2;
            printf("\nResult: %.2lf", result);
            break;
        case '/':
            result = n1 / n2;
            printf("\nResult: %.2lf", result);
            break;
    }

    return 0;
}