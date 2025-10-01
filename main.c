#include <stdio.h>
#include "stats.h"
#include "game.h"

int main()
{
    int target_score;

    printf("Enter the winning score: ");
    scanf("%d", &target_score);

    game_start(target_score);

    return 0;
}