#include <stdio.h>

int count_int(int *tableau, int taille, int valeur) {
    int i;
    int compteur;

    compteur = 0;
    for (i = 0; i < taille; i++) {
        if (tableau[i] == valeur)
            compteur++;
    }
    return compteur;
}


int main() {
    int t1[5]  = { 2, 42, 1, 42, 9 };
    int t2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    printf("%d dans t1 : %d fois.\n", 42, count_int(t1, 5, 42));
    printf("%d dans t1 : %d fois.\n",  2, count_int(t1, 5,  2));
    printf("%d dans t2 : %d fois.\n", 10, count_int(t2, 10, 10));
    printf("%d dans t2 : %d fois.\n", 42, count_int(t2, 10, 42));

    return 0;
}
