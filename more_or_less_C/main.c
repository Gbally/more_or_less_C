#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include "random_number.h"
#include "min_max_value.h"
#include "choose_number_human.h"
#include "launch_game.h"

void game_option_computer() {
    // Give choice of difficulty and then the computer will choose a randoom number
    int player_choice = 0;
    int min;
    int max;
    int cpt = 0;
    
    // Difficulty menu
    while (player_choice < 1 || player_choice > 4) {
        printf("\n1. Easy     [0 - 10]\n");
        printf("2. Normal   [0 - 100]\n");
        printf("3. Hard     [0 - 1000]\n");
        printf("4. Customed [X - Y]\n");
        printf("Your choice: ");
        scanf("%d", &player_choice);
    }
    
    switch (player_choice) {
        case 1: // Easy
            cpt = game(random_number(0, 10));
            break;
        case 2: // Medium
            cpt = game(random_number(0, 100));
            break;
        case 3: // Hard
            cpt = game(random_number(0, 1000));
            break;
        case 4: // Customed
            printf("Choose a Min and Max number.\n");
            printf("MIN: ");
            scanf("%d", &min);
            printf("MAX: ");
            scanf("%d", &max);
            cpt = game(random_number(min, max));

    }
    
    printf("\n\nIt took you %d try to find the solution\n\n", cpt);
//    printf("Press enter to continue\n");
//    printf ( "Press enter to continue..." );
//    fflush ( stdout );
//    getchar();

}

void game_option_human() {
    // Let a player 1 choose the range then player 2 play, then switch players and display the score
    int cpt_p1;
    int cpt_p2;
    
    // A bit useless to use structure but it made me learn from it - so not so useless after all
    struct min_max_value val;
    val = min_max();
    
    // Player 1
    cpt_p1 = game(choose_number(val.smin, val.smax, 1, 2));
    
    // Player 2
    cpt_p2 = game(choose_number(val.smin, val.smax, 2, 1));
    
    printf("Player 1 succeded in %d try while player 2 succeded in %d try.\n", cpt_p1, cpt_p2);
//    printf ( "Press enter to continue..." );
//    fflush ( stdout );
//    getchar();
}

int main(int argc, const char * argv[]) {
    
    int player_choice; // Init variable
    
    do {
        // Menu that will be displayed before each game
        printf("\n==== More or less game ====\n\n");
        printf("1. Play a game vs computer\n");
        printf("2. Play a game vs human\n");
        printf("3. Quit\n");
        printf("Your choice: ");
        scanf("%d", &player_choice);
        
        // Exit option
        if (player_choice == 3){
            return 0;
        } else if (player_choice == 1){// Play option
            game_option_computer();
            player_choice = 0;
        } else if (player_choice == 2){
            game_option_human();
            player_choice = 0;
        }
        
    } while (player_choice != 1 || player_choice != 2); // Keep looping if player writes wrong intput
    
    return 0;
}
