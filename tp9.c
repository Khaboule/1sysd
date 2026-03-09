#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct City City; // pour ne pas répéter struct
struct City {
    char name[50];
    int pop;
    double area;
};

void print_city(City city) {
    printf("Ville de %s : population = %d, surface = %.2lfkm²\n",
            city.name, city.pop, city.area);
}

City ask_city() {
    City city;
    printf("Nom : ");
    scanf("%s", city.name);
    printf("Population : ");
    scanf("%d", &city.pop);
    printf("Surface : ");
    scanf("%lf", &city.area);
    return city;
}

double density(City city) {
   return city.pop / city.area;
}


int main() {
    City city1, city2, city3;

    strcpy(city1.name, "Paris");
    city1.pop  = 2103778;
    city1.area = 105.40;

    strcpy(city2.name, "Morlaix");
    city2.pop = 15194;
    city2.area = 24.82;

    city3 = ask_city();

    print_city(city1);
    print_city(city2);
    print_city(city3);

    printf("Densité de %s : %.2lf hab/km²\n", city1.name,
            density(city1));

    return 0;
}



// TODO : ne marche pas (segfault)

typedef struct City City; // pour ne pas répéter struct
struct City {
    char *name;
    int pop;
    double area;
};

void print_city(City city) {
    printf("Ville de %s : population = %d, surface = %.2lfkm²\n",
            city.name, city.pop, city.area);
}

City ask_city() {
    City city;
    printf("Nom : ");
    scanf("%ms", &city.name);
    printf("Population : ");
    scanf("%d", &city.pop);
    printf("Surface : ");
    scanf("%lf", &city.area);
    return city;
}

double density(City city) {
   return city.pop / city.area;
}


int main() {
    City city1, city2, city3;

    city1.name = malloc(sizeof(char)*6);
    strcpy(city1.name, "Paris");
    city1.pop  = 2103778;
    city1.area = 105.40;

    city1.name = malloc(sizeof(char)*8);
    strcpy(city2.name, "Morlaix");
    city2.pop = 15194;
    city2.area = 24.82;

    city3 = ask_city();

    print_city(city1);
    print_city(city2);
    print_city(city3);

    printf("Densité de %s : %.2lf hab/km²\n", city1.name,
            density(city1));

    return 0;
}