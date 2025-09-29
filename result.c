#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"
#include "result.h"

void game_result(int rolls1, int rolls2, int score1, int score2)
{
    

    printf("\n---GAME RESULT---\n");
    printf("Player1 score = %d(Rolls = %d)\n", score1, rolls1);
    printf("Player2 score = %d(Rolls = %d)\n", score2, rolls2);



    if (score1 >= score2)
        printf("Player1 Winner!\n");
   
    else if(score2 >= score1)
        printf("Player2 Winner!\n");

}