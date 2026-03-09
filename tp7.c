#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    double a,b, result;
    char op;

    if ( argc != 4 ) {
        printf("Usage: %s val1 val2 op\n", argv[0]);
        printf("\top is in +, -, *, /\n");
        exit(2);
    }
    // on suppose que argc vaut bien 3 (ou plus)
    a = strtod(argv[1], NULL);
    b = strtod(argv[2], NULL);
    op = argv[3][0]; // premier élément de argv[0]

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            result = a/b;
            break;
        default:
            printf("Unknown operation: %c\n", op);
            // ou return 1;
            exit(1);
    }
    printf("%.2lf\n", result);
    exit(0);
}


#define MAX 100

int main(int argc, char *argv[]) {
    double val, numbers[MAX];
    int i;
    double sum = 0;

    for(i = 1; i < argc; i++) {
        val = strtod(argv[i], NULL);
        sum += val;
    }
    printf("%.2lf\n", sum);
    return 0;
}