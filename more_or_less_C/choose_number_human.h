//
//  choose_number_human.h
//  more_or_less_C
//
//  Created by SBR1613127 on 2019/03/19.
//  Copyright © 2019 SBR1613127. All rights reserved.
//

#ifndef choose_number_human_h
#define choose_number_human_h

//void clearScreen()
//{
//    const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
//    write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
//}

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

#endif /* choose_number_human_h */
