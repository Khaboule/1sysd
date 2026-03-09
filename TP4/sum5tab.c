#include<stdio.h>
#include<stdlib.h>

int main() {
    int number, sum, numbers[5];

    sum = 0;
    for (int i = 0; i < 5; i++) { // répète 5 fois
        printf("Un nombre : ");
        scanf("%d", &number);
        numbers[i] = number;
        sum += number;
    }

    printf("Somme : %d\n", sum);

    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    exit(0);
}