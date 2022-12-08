#include <stdio.h>

/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){

    char name[25];

    printf("\n What's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0) 
    {
        printf("You did not enter your name");
        printf("\n What's your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);

    return 0;
}