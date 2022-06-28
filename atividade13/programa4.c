#include <stdio.h>

#define M 1
#define N 1

int Ack (int m, int n) {
    if (m == 0) return n+1;
    if (n == 0) return Ack(m-1, 1);
    return Ack(m-1,Ack(m, n-1));
}

void main () {
    printf("\n%d\n\n", Ack(M, N));
}