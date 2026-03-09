#include<stdio.h>
#include<stdlib.h>

int main() {
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