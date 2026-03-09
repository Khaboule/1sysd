#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int main() {
    int size, number, sum, numbers[MAX], max, min;

    printf("Combien de nombres gérer (maximum %d) ? ", MAX);
    scanf("%d", &size);

    sum = 0;
    for (int i = 0; i < size; i++) { // répète size fois
        printf("Un nombre : ");
        scanf("%d", &number);
        numbers[i] = number;
        sum += number;
    }

    printf("Somme : %d\n", sum);

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // suppose un tableau non vide !
    min = max = numbers[0]; // premier élément
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("Minimum : %d Maximum : %d\n", min, max);

    // Tri
    for (int i = 0; i < size; i++) {
        // on cherche plus petit dans la suite
        int index_min = i, tmp;
        for(int j = i + 1; j < size; j++) { // sans doute j < size -1 suffit, à vérifier...
            if (numbers[j] < numbers[index_min]) {
                index_min = j;
            }
        }
        // arrivé ici index_min est l'indice d'un
        // élément <= que celui à l'indice i
        tmp = numbers[i];
        numbers[i] = numbers[index_min];
        numbers[index_min] = tmp;
    }

    printf("Tableau trié :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");


    exit(0);
}


int main() {
    int number, sum;

    sum = 0;
    for (int i = 0; i < 5; i++) { // répète 5 fois
        printf("Un nombre : ");
        scanf("%d", &number);
        sum += number;
    }
    printf("Somme : %d\n", sum);
    exit(0);
}


int main() {
    int number, sum, numbers[5];

    sum = 0;
    for (int i = 0; i < 5; i++) { // répète 5 fois
        printf("Un nombre : ");
        scanf("%d", &number);
        numbers[i] = number;
        sum += number;
    }

    printf("Somme : %d\n", sum);

    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    exit(0);
}


