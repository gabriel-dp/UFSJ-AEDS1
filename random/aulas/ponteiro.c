#include <stdio.h>

void main () {
    int x = 2000;
    int* y = &x;
    printf("\n%p | %p | %d\n", y, &y, * y);
    *++y;
    printf("\n%p | %p | %d\n", y, &y, * y);
    ++*y;
    printf("\n%p | %p | %d\n", y, &y, * y);
}