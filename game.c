#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"
#include "result.h"







void game_start(int target_score)
{
    srand(time(NULL));

    int rolls1 = 0, rolls2 = 0;
    int score1 = 0, score2 = 0;
    int dice;

    while(score1 < target_score && score2 < target_score)
    {
        getchar();
        dice = rand() % 6 + 1;
        score1 += dice;
        rolls1++;
        
        printf("Number on the die: %d. (Player1 score = %d)\n", dice, score1);
        
        if (score1 >= target_score) break;

        getchar();
        dice = rand() % 6 + 1;
        score2 += dice;
        rolls2++;

        printf("Number on the die: %d. (Player2 score = %d)\n", dice, score2);
    }
    game_result(rolls1, rolls2, score1, score2);
}

