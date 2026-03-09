#include<stdio.h>
#include<stdlib.h>

int main() {
    int number, sum;

    sum = 0;
    for (int i = 0; i < 5; i++) { // répète 5 fois
        printf("Un nombre : ");
        scanf("%d", &number);
        sum += number;
    }
    printf("Somme : %d\n", sum);
    exit(0);
}