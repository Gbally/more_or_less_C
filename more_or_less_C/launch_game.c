#include <stdio.h>

int game(int mystery_number) {
    
    int number;
    int cpt = 0;
    
    // Continue until return is reached (unlimited time game)
    while (1) {
        printf("\nGuess a number: ");
        scanf("%d", &number);
        cpt++;
        
        // Number found - return
        if (number == mystery_number) {
            printf("\nCongratulation, you have found the correct number");
            return cpt;
        }
        // Too high - hind 'less'
        else if (number > mystery_number) {
            printf("\nLess");
        }
        // Loo low - hint 'more'
        else if (number < mystery_number) {
            printf("\nMore");
        }
    }
}
