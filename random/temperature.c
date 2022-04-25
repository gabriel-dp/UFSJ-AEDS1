#include <stdio.h>

void main () {
    float fahrenheint, celsius;
    printf("\nInsert temperature in Fahrenheint: ");
    scanf("%f", &fahrenheint);
    celsius = (fahrenheint - 32.0f) * (5.0f/9.0f);
    printf("In Celsisus: %.1f\n\n", celsius);
}