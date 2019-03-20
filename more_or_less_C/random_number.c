#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number(int MIN, int MAX){
    // Select a rondom number between MIN and MAX
    int mystery_number;
    
    srand(time(NULL)); // Init of random
    mystery_number = (rand() % (MAX - MIN + 1)) + MIN;
    
    return mystery_number;
}
