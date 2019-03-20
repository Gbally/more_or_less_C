#include <stdio.h>

int choose_number(int min, int max, int p1, int p2) {
    // Player will have to chooce
    int n;
    
    do{
        printf("\nPlayer %d, choose a number between %d and %d that player %d will have to find", p1, min, max, p2);
        printf("\nYour choice: ");
        scanf("%d", &n);
    } while (min > n || max < n);
    
    //    clearScreen();
    int i;
    for (i = 0; i < 50; i++)
    {
        printf("\n");
    }
    
    return n;
}
