#include <stdio.h>
#include <string.h>

struct Player {

    char name[12];
    int score;

};

/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Nicolas");
    player1.score = 5;

    strcpy(player2.name, "Virginie");
    player2.score = 7;

    printf("Player name: %s\n", player1.name);
    printf("Score: %d\n", player1.score);

    printf("Player name:%s\n", player2.name);
    printf("Score: %d\n", player2.score);


    return 0;
}