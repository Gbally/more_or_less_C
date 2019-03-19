//
//  launch_game.h
//  more_or_less_C
//
//  Created by SBR1613127 on 2019/03/19.
//  Copyright © 2019 SBR1613127. All rights reserved.
//

#ifndef launch_game_h
#define launch_game_h

int game(int mystery_number) {
    
    int number;
    int cpt = 0;
    
    while (1) {
        printf("\nGuess a number: ");
        scanf("%d", &number);
        cpt++;
        
        if (number == mystery_number) {
            printf("\nCongratulation, you have found the correct number");
            return cpt;
        }
        else if (number > mystery_number) {
            printf("\nLess");
        }
        else if (number < mystery_number) {
            printf("\nMore");
        }
    }
}

#endif /* launch_game_h */
