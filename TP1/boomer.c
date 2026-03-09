#include<stdio.h>

int main() {
    int age;

    printf("Votre age : ");
    scanf("%d", &age);
    if ( age >= 42 ) {
        printf("Ok Boomer!\n");
    } else {
        printf("Time to learn UNIX\n");
    }