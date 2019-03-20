#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int positive_number(int n){
    // Return the absolute value of n
    if (n < 0){
        printf("\nNegative number not accepted, %d will be selected\n\n", abs(n));
    }
    return abs(n);
}

void min_max_value(int* min, int* max){
    
    int user_min;
    int user_max;
    
    printf("\nChoose a Min and Max number.\n");
    
    // Celection of MIN value
    printf("MIN: ");
    scanf("%d", &user_min);
    user_min = positive_number(user_min);
    
    // Selection of MAX value
    do {
        printf("\nEnter a max value greater than the min + 10");
        printf("\nMAX: ");
        scanf("%d", &user_max);
    } while((user_min + 10) > user_max); // Loop until correct value is given by players
    
    *min = user_min;
    *max = user_max;

}
