#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"
#include "stats.h"




void game_start(int target_score)
{
    srand(time(NULL));


   

    int rolls1 = 0, rolls2 = 0;
    int score1 = 0, score2 = 0;
    int dice;

    int roll_dice(int score):
    {        
        dice = rand() % 6 + 1;

        return (score += dice);
    };

    while(score1 < target_score && score2 < target_score)
    {
        
        void player1_turn(int score1, int dice, int rolls1);
        {
            getchar();
            
            score1 = roll_dice(score1);
        }
        
        printf("Number on the die: %d. (Player1 score = %d)\n", dice, score1);
        
        if (score1 >= target_score) break;

        

        void player2_turn(int score2, int rolls2,int dice);
        {
            getchar();
            
            score2 = roll_dice(score2);
        }

        printf("Number on the die: %d. (Player2 score = %d)\n", dice, score2);
    }
    game_result(rolls1, rolls2, score1, score2);

    if (score1 >= score2)
        printf("Player1 Winner!\n");
   
    else if(score2 >= score1)
        printf("Player2 Winner!\n");


}

