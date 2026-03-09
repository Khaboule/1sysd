#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int secret, guess;

    srand(time(NULL));
    secret = rand() % 10 + 1;

    printf("J'ai choisi un nombre entre 1 et 10\n");
    printf("Votre proposition : ");
    scanf("%d", &guess);

    if ( guess < secret ) {
        printf("Trop petit... C'était %d\n", secret);
    } else if ( guess > secret ) {
        printf("Trop grand... C'était %d\n", secret);
    } else {
        printf("Trouvé!\n");
    }
}