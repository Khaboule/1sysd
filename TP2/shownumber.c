#include<stdio.h>

int main() {
    int n, base, c;

    printf("Base : ");
    scanf("%d", &base);
    printf("Nombre (en base 10) : ");
    scanf("%d", &n);

    while ( n != 0 ) {
        c = n%base;
        n = n/base;
        printf("%d ", c);
    }
    printf("\n");
}