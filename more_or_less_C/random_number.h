#ifndef random_number_h
#define random_number_h

int random_number(int MIN, int MAX){
    // Select a rondom number between MIN and MAX
    int mystery_number;
    
    srand(time(NULL)); // Init of random
    mystery_number = (rand() % (MAX - MIN + 1)) + MIN;
    
    return mystery_number;
}

#endif /* random_number_h */
