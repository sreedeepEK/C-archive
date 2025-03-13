#include <stdio.h>
#include <string.h>


struct Player
{

    char name[12];
    int score;

};

int main()
{
    // struct= collection of related member (variable)
    // they can be of different data type
    // listed under one name in a block of memory (like class in python)

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Bro");
    player1.score = 4;


    strcpy(player2.name, "Bro 2");
    player1.score = 3;

    printf("%s\n", player1.name);
    printf("%d\n",player1.score);

    return 0;
}