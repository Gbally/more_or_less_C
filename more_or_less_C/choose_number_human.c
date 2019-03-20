#include <stdio.h>

int choose_number(int min, int max, int p1, int p2) {
    // p1 has value of 1 and p2 has a value of 2 - used this insead of if/else to determine who has to play.
    
    int n;
    int i;
    
    // Verify that the number choosen by the player is in the range of min and max
    do{
        printf("\nPlayer %d, choose a number between %d and %d that player %d will have to find", p1, min, max, p2);
        printf("\nYour choice: ");
        scanf("%d", &n);
    } while (min > n || max < n);
    
    // I did not find a way to 'clean' the terminal so the other player can not cheat
    for (i = 0; i < 50; i++)
    {
        printf("\n");
    }
    
    return n;
}
