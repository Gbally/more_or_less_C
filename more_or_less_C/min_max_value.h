//
//  min_max_value.h
//  more_or_less_C
//
//  Created by SBR1613127 on 2019/03/19.
//  Copyright © 2019 SBR1613127. All rights reserved.
//

#ifndef min_max_value_h
#define min_max_value_h

// For informations: https://www.geeksforgeeks.org/how-to-return-multiple-values-from-a-function-in-c-or-cpp/
struct min_max_value{
    // Create a structure that stores two values
    int smin;
    int smax;
};

int positive_number(int n){
    // Return the absolute value of n
    if (n < 0){
        printf("\nNegative number not accepted, %d will be selected\n\n", abs(n));
    }
    return abs(n);
}

struct min_max_value min_max(){
    int min;
    int max;
    
    // Init structure and its values
    struct min_max_value val;
    val.smax = 0;
    val.smin = 0;
    
    printf("\nChoose a Min and Max number.\n");
    
    // Celection of MIN value
    printf("MIN: ");
    scanf("%d", &min);
    min = positive_number(min);
    
    // Selection of MAX value
    do {
        printf("\nEnter a max value greater than the min + 10");
        printf("\nMAX: ");
        scanf("%d", &max);
    } while((min + 10) > max); // Loop until correct value is given by players
    
    // Update structure values
    val.smin = min;
    val.smax = max;
    
    // Return the structure with values updated
    return val;
}

#endif /* min_max_value_h */
