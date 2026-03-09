#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_char(char *chaine, char caractere, int insensible) {
    int i;
    int compteur;

    compteur = 0;
    for (i = 0; chaine[i] != '\0'; i++) {
        if (insensible) {
            if (tolower(chaine[i]) == tolower(caractere))
                compteur++;
        } else {
            if (chaine[i] == caractere)
                compteur++;
        }
    }
    return compteur;
}


int main(int argc, char *argv[]) {
    int insensible;

    if (argc < 3) {
        printf("Usage : %s <chaine> <caractere> [-i]\n", argv[0]);
        return 1;
    }

    insensible = (argc >= 4 && strcmp(argv[3], "-i") == 0);

    printf("%d\n", count_char(argv[1], argv[2][0], insensible));
    return 0;
}
