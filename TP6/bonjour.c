#include<stdio.h>
#include<stdlib.h>

int main() {
    char first[100], last[100];
    int length;
    char *p;
/*
    printf("Votre prénom : ");
    scanf("%s", first);
    printf("Votre nom : ");
    scanf("%s", last);

    printf("Bonjour %s %s !\n", first, last);

    p = first;
    length = 0;
    while ( *p++ ) {
        length++;
    }
    printf("Longueur du prénom : %d\n", length);

    p = last;
    length = 0;
    while ( *p++ ) {
        length++;
    }
    printf("Longueur du prénom : %d\n", length);
*/

    // déclaration ici : normalement c'est au début de main
    char str1[100], str2[100];
    int i,j;
    char *q;

    printf("Attention pas d'espace dans la saisie. Merci !\n");
    printf("Texte 1 : ");
    scanf("%s", str1);
    printf("Texte 2 : ");
    scanf("%s", str2);

    i = j = 0;
    while ( str1[i] == str2[j] && str1[i] && str1[j] ) {
        i++;
        j++;
    }
    // on est sorti...
    // pourquoi ? si égaux: on est à la fin
    // si différent : on est pas à le fin des deux
    if ( str1[i] == str2[j] ) { // ou bien str1[i] || str2[j]
        printf("Identique !\n");
    } else {
        printf("Différent !\n");
    }
    // avec des pointeurs
    p = str1;
    q = str2;
    while ( *p == *q && *p && *q ) {
        p++;
        q++;
    }
    if ( *p == *q ) { // piège : mettre = au lieu de ==
        printf("Identique !\n");
    } else {
        printf("Différent !\n");
    }
    exit(0);
}