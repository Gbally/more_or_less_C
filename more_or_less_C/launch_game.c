#include <stdio.h>

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
