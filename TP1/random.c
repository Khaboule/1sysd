#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main() {
    int n;

    srand(time(NULL));

    n = rand() % 10 + 1;
    printf("%d\n", n);
    n = rand() % 10 + 1;
    printf("%d\n", n);
    n = rand() % 10 + 1;
    printf("%d\n", n);
    n = rand() % 10 + 1;
    printf("%d\n", n);
    n = rand() % 10 + 1;
    printf("%d\n", n);
}