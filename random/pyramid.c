#include <stdio.h>

void main () {
    int num;
    printf("\nInsert the max pyramid's number: ");
    scanf("%d", &num);

    //validates the number
    if (num % 2 == 0 || num < 1) {
        printf("ERROR (CHECK IF THE NUMBER IS ODD AND BIGGER THAN ZERO)\n\n");
        exit(0);
    }
    printf("\n\n");

    int min = 1;
    for (int max = num; min < (float)(num)/2 + 1; max--, min++) {

        //print blank spaces to make the pyramid
        int spaces = num - max;
        for (int i = 0; i < spaces; i++) {
            printf("  ");
        }

        //print the numbers
        for (int i = min; i <= max; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n\n");
}