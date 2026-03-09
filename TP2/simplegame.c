#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int secret, guess, tries=0, notfound;

    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("J'ai tiré un nombre entre 1 et 100\n");

    notfound = 1;
    while ( notfound ) {
        printf("Votre idée : ");
        scanf("%d", &guess);
        tries++;
        if ( guess > secret ) {
            printf("Plus petit.\n");
        } else if ( guess < secret ) {
            printf("Plus grand.\n");
        } else {
            // donc égal...
            notfound = 0;
        }
    }
    printf("Bravo vous avez trouvé en %d coups.\n", tries);
}