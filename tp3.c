#include <stdio.h>
#include<stdlib.h>

/* int main() {
    double a,b, result;
    int op;

    printf("Premier nombre : ");
    scanf("%lf", &a);
    printf("Second nombre  : ");
    scanf("%lf", &b);
    // Syntaxe : continuation de chaîne.
    printf("1. + (addition)\n"
           "2. - (soustraction)\n"
           "3. * (multiplication)\n"
           "4. / (division)\n");
    printf("Opération : ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3: 
            result = a*b;
            break;
        case 4:
            result = a/b;
            break;
        default:
            printf("Opération inconnue.\n");
            // ou return 1;
            exit(1);
    }
    printf("Résultat : %.3lf\n", result);
    // ou return 0;
    exit(0);
}


int main(void) {
    int x, y, z;

    while (1) {
        x = 0;
        y = 1;
        do {
            printf("%d\n", x);

            z = x + y;
            x = y;
            y = z;
        } while(x < 255);
    }
} */
int main() {
    int nombres[100];
    int n, somme = 0;
    int min, max;
    
    do {
        printf("Combien de nombres ? ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    
    for (int i = 0; i < n; i++) {
        printf("Nombre %d : ", i + 1);
        scanf("%d", &nombres[i]);
        somme += nombres[i];
    }
    
    min = nombres[0];
    max = nombres[0];
    
    for (int i = 1; i < n; i++) {
        if (nombres[i] < min) {
            min = nombres[i];
        }
        if (nombres[i] > max) {
            max = nombres[i];
        }
    }
    
    printf("Tableau : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nombres[i]);
    }
    
    printf("\nSomme : %d\n", somme);
    printf("Plus petit : %d\n", min);
    printf("Plus grand : %d\n", max);
    
    // Tri par sélection
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (nombres[j] < nombres[min_index]) {
                min_index = j;
            }
        }
        int temp = nombres[i];
        nombres[i] = nombres[min_index];
        nombres[min_index] = temp;
    }
    
    printf("Tableau trié : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nombres[i]);
    }
    printf("\n");
    
    return 0;
}