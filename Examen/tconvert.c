#include <stdio.h>

float celsiusfahrenheit(float celsius) {
    return (9.0 / 5.0) * celsius + 32.0;
}

float fahrenheitcelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}


int main() {
    int choix;
    float valeur;

    printf("Conversion de temperature\n");
    printf("1 Celsius vers Fahrenheit\n");
    printf("2 Fahrenheit vers Celsius\n");
    printf("Votre choix :");
    scanf("%d", &choix);

    if (choix == 1) {
        printf("Entrez une temperature en Celsius :");
        scanf("%f", &valeur);
        printf("%.2f C = %.2f F\n", valeur, celsiusfahrenheit(valeur));
    } else if (choix == 2) {
        printf("Entrez une temperature en Fahrenheit :");
        scanf("%f", &valeur);
        printf("%.2f F = %.2f C\n", valeur, fahrenheitcelsius(valeur));
    } else {
        printf("Choix invalide.\n");
    }

    return 0;
}
