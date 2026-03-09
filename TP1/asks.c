
#include<stdio.h>

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