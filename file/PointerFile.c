#include <stdio.h>

/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){


    /*
    FILE *pF = fopen("test.txt", "w");

    fprintf(pF, "We are writing!!!!! Hey!!");
    */

    //fclose(pF);

    /*
     if (remove("test.txt") == 0) {
        printf("That file was deleted!");
    } else {
        printf("That file was not deleted!");
    }
    */

   // idk why this is giving error? i'm going to check out later, bc not find the file

    FILE *pF = fopen("C:\\Users\\rykil\\Desktop\\series.txt", "r");
    char buffer[255];

    if(pF == NULL) 
    {
        printf("Not find this file!");
    } 
    else
    {
        while(fgets(buffer, 255, pF) != NULL) 
        {
            printf("%s", buffer);
        }
    }

    fclose(pF);

    return 0;
}