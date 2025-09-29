#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"


void game_start(int target_score)
{
    srand(time(NULL));

    int score1 = 0, score2 = 0;
    int dice;

    while(score1 < target_score && score2 < target_score)
    {
        getchar();
        dice = rand() % 6 + 1;
        score1 += dice;
        
        printf("Number on the die: %d. (Player1 score = %d)\n", dice, score1);
        
        if (score1 >= target_score) break;

        getchar();
        dice = rand() % 6 + 1;
        score2 += dice;

        printf("Number on the die: %d. (Player2 score = %d)\n", dice, score2);
    }

    if (score1 >= target_score && score2 >= target_score) 
        printf("Draw!\n");
    
    else if (score1 >= target_score)
        printf("Player1 Winner!\n");
    else
        printf("Player2 winner!\n");
}