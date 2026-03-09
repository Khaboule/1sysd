#include<stdio.h>
#include<stdlib.h>

// code des fonctions ici

int slen(char *s) {
    int len = 0;
    while (*s++) {
        len++;
    }
    return len;
}

int slen2(char *s) {
    int i = 0;
    for (i = 0; s[i] != 0; i++) ; // rien à faire dans le corps
    return i;
}


int is_upper(char *s) {
    int upper = 1;
    // on passe à faux dès qu'on trouve une minuscule
    // du coup une chaîne sans lettre du tout est 
    // considérée comme toute en majuscule, ça se
    // défend (différent de isupper() en Python)
    while (*s) {
        if (*s >= 'a' && *s <= 'z') { // minuscule
            upper = 0;
            break;
        } 
        s++;
    }
    return upper;
}

int is_lower(char *s) {
    int lower = 1;
    // on passe à faux dès qu'on trouve une majuscule
    // du coup une chaîne sans lettre du tout est 
    // considérée comme toute en minuscule, ça se
    // défend (différent de islower() en Python)
    while (*s) {
        if (*s >= 'A' && *s <= 'Z') { // majuscule
            lower = 0;
            break;
        } 
        s++;
    }
    return lower;
}

void supper(char *s) {
    while (*s) {
        if (*s >= 'a' && *s <= 'z') { // minuscule
            *s -= 32;
        }
        s++;
    }
}

void slower(char *s) {
    // similaire au while ci-dessus
    for ( ; *s; s++) {
        if (*s >= 'A' && *s <= 'Z') { // majuscule 
            *s += 32;
        }
    }
}

char *scopy(char *s) {
    char *dest, *p;
    dest = malloc(sizeof(char) * (slen(s) + 1));
    if (dest == NULL) {
        // pb d'allocation mémoire
        return NULL;
    }
    p = dest;
    // Deux façons équivalentes :
    //while ( ( *p++ = *s++ ) ) ; // double () pour éviter warning
    while (*s) {
        *p++ = *s++;
    }
    *p = 0; // zéro terminal à ajouter !
    return dest;
}

int sequal(char *s1, char *s2) {
    // Tant que : s1 pas fini ET s2 pas fini 
    // ET *s1 == *s2 (caract. courant identique)
    while ( *s1 && *s2 && *s1 == *s2 ) {
        s1++;
        s2++;
    }
    return *s1 == 0 && *s2 == 0; 
}

// code de test

int main() {
    char msg1[] = "Hello World!";
    char m1[] = "MAJUSCULE";
    char m2[] = "minuscule";
    char m3[] = "MeLAnge";
    char s1[] = "Une phrase simple.";
    char s2[] = "Une autre phrase.";
    char *s3;
    char s4[] = "Debut et";
    char s5[] = "Debut et suite";

    printf("Longeur de msg1 (12 ?) %d\n", slen(msg1) );
    printf("Longeur de msg1 (12 ?) %d\n", slen2(msg1) );

    if (is_upper(m1)) {
        printf("%s est en majuscules\n", m1);
    } else {
        printf("%s n'est pas en majuscule\n", m1);
    }
    if (is_upper(m2)) {
        printf("%s est en majuscules\n", m2);
    } else {
        printf("%s n'est pas en majuscules\n", m2);
    }
    if (is_upper(m3)) {
        printf("%s n'est en majuscules\n", m3);
    } else {
        printf("%s n'est pas en majuscules\n", m3);
    }

    if (is_lower(m1)) {
        printf("%s est en minuscules\n", m1);
    } else {
        printf("%s n'est pas en minuscules\n", m1);
    }
    if (is_lower(m2)) {
        printf("%s est en minuscules\n", m2);
    } else {
        printf("%s n'est pas en minuscules\n", m2);
    }
    if (is_upper(m3)) {
        printf("%s n'est en minuscules\n", m3);
    } else {
        printf("%s n'est pas en minuscules\n", m3);
    }


    printf("%s\n", s1);
    supper(s1);
    printf("s1 après passage en majuscule : %s\n", s1);
   
    printf("%s\n", s2);
    slower(s2);
    printf("s2 après passage en minuscule : %s\n", s2);
    
    s3 = scopy(s2);
    printf("Adresse de s2 : %lx\n", (unsigned long)s2); 
    printf("Adresse de s3 : %lx\n", (unsigned long)s3); 
    printf("s2 : %s\n", s2);
    printf("s3 : %s\n", s3);

    printf("s2 : %s s3 : %s\n", s2, s3);
    if ( sequal(s2, s3) ) {
         printf("s2 et s3 ont le même contenu\n");
    } else {
         printf("s2 et s3 ont un contenu différent\n");
    }
    
    printf("s1 : %s s2 : %s\n", s1, s2);
    if ( sequal(s1, s2) ) {
         printf("s1 et s2 ont le même contenu\n");
    } else {
         printf("s2 et s2 ont un contenu différent\n");
    }
    
    printf("s4 : %s s5 : %s\n", s4, s5);
    if ( sequal(s4, s5) ) {
         printf("s4 et s5 ont le même contenu\n");
    } else {
         printf("s4 et s5 ont un contenu différent\n");
    }
    
} 