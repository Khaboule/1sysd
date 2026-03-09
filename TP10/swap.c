#include<stdio.h>

void swap(int *p, int *q) {
    int tmp;
    tmp = *p;
    *p  = *q;
    *q  = tmp;
}

int main() {
    int a = 12, b = 42;

    // ceci ne peut pas marcher !
    // swap(a, b);
    // mais ceci oui :
    swap(&a, &b); 
    printf("a,b = %d, %d\n", a, b);

}