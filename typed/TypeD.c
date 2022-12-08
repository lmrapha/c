#include <stdio.h>
#include <string.h>

typedef struct {
    char name[25];
    char password[15];
    int id;

} User;


/*
*   Learning C Exercise
*   @lmrapha
*/

int main(){

   User user1 = {"Maria", "password123", 1};
   User user2 = {"Diogo", "password123", 2};

    printf("ID: %d\n", user1.id);
    printf("Username: %s\n", user1.name);
    printf("Password: %s\n", user1.password);

    printf("ID: %d\n", user2.id);
    printf("Username: %s\n", user2.name);
    printf("Password: %s\n", user2.password);

    return 0;
}