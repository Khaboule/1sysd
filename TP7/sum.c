#include<stdio.h>
#include<stdlib.h>

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