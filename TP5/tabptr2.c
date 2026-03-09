#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX 100

int main() {
    int size;
    double numbers[MAX], logs[MAX];
    double *p, *q;

    printf("Combien de nombres gérer (maximum %d) ? ", MAX);
    scanf("%d", &size);

    for (int i = 0; i < size; i++) { // répète size fois
        printf("Un nombre : ");
        scanf("%lf", &numbers[i]);
    }

    for (int i = 0; i < size; i++) {
        logs[i] = log(numbers[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("%.2lf ", logs[i]);
    }
    printf("\n");

    // avec arithmétique de pointeur, peu
    // recommandé pour des tableaux de nombres
    // mais très pratique pour des chaînes de caractères

    p = numbers;
    for (int i = 0; i < size; i++) { // répète size fois
        printf("Un nombre : ");
        scanf("%lf", p);
        p++; // passe à l'elt suivant
    }

    p = numbers;
    q = logs;
    for (int i = 0; i < size; i++) {
        *(q++) = *(p++); // affecte puis avance d'une case
    }

    p = logs;
    for (int i = 0; i < size; i++) {
        printf("%.2lf ", *(p++)); // déréférence p, PUIS augmente p
    }
    printf("\n");

}