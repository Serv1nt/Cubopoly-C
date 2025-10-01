#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"
#include "stats.h"

void game_result(int rolls1, int rolls2, int score1, int score2)
{
    

    printf("\n---GAME RESULT---\n");
    printf("Player1 score = %d(Rolls = %d)\n", score1, rolls1);
    printf("Player2 score = %d(Rolls = %d)\n", score2, rolls2);

}