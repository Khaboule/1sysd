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



int main() {
    int a = 10;
    int b = 3;

    printf("%d/%d = %d\n", a, b, a/b);
    printf("%d%%%d = %d\n", a, b, a%b);
}



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



int main() {
    int i = 10;

    while (i > 0) {
        printf("%d\n", i);
        i = i - 2;
    }
}