
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




int main() {
    int n;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    if ( n > 10 ) {
        printf("C'est plus grand que dix.\n");
    } else {
        printf("Ce n'est pas plus grand que dix.\n");
    }

    printf("Plus 42 : %d\n", n + 42);
}



int main() {
    int age;

    printf("Votre age : ");
    scanf("%d", &age);
    if ( age >= 42 ) {
        printf("Ok Boomer!\n");
    } else {
        printf("Time to learn UNIX\n");
    }
}