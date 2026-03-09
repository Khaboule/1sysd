#include <stdio.h>

int count_char(char *chaine, char caractere) {
    int i;
    int compteur;

    compteur = 0;
    for (i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == caractere)
            compteur++;
    }
    return compteur;
}


int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage : %s <chaine> <caractere>\n", argv[0]);
        return 1;
    }

    printf("%d\n", count_char(argv[1], argv[2][0]));
    return 0;
}
