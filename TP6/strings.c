#include<stdio.h>

int main() {
    char s[] = "Bonjour !";
    char s2[] = { 66, 111, 110, 106, 111, 117, 114, 32, 33, 0 };
    // attention : '\0' c'est pareil que 0 différent de '0' (89)
    char s3[] = { 'B', 'o', 'n', 'j', 'o', 'u', 'r', ' ', '!', '\0' };

    printf("%s Ça va ?\n", s);
    printf("%s Ça va ?\n", s2);
    printf("%s Ça va ?\n", s3);

    for (int i = 0; i < 10; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
    // les 127 caractères affichables du code ASCII
    for (int i = 32; i < 127; i++) {
        printf("%c", i);
    }
    printf("\n");

    // Saisie de chaine : pb délicat (cf. lien donné dans le pdf)
    // scanf est dangeureux, man scanf
    // on va être aventureux
    char str[100]; // chaîne de taille max 99 ! (zéro terminal !)
    printf("Votre texte : ");
    // scanf("%s", str); // pas &str !!! (pb : espace)
    // pour lire toute la lignes, espaces comprises :
    scanf("%[^\n]", str);

    // Calcul de longueur d'une chaîne
    char *p;
    p = str;
    int l = 0;
    while (*p++) {
        l++;
    }
    printf("Longueur de la chaîne : %d\n", l);
}