#include<stdio.h>
#include<stdlib.h>

typedef double matrix[3][3];

void print_matrix(matrix M, char name[]) {
    int i,j;
    printf("%s =\n", name);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%+3.2lf ", M[i][j]);
        }
        printf("\n");
    }
}

void summat(matrix A, matrix B, matrix C) {
    int i,j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
        printf("\n");
    }
}

int main() {
    matrix A = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    matrix B = { {1, 3, 2}, {-7, 8, 9}, {2, 0, -1} };
    matrix C, D;

    print_matrix(A, "A");
    print_matrix(B, "B");
    
    summat(A, B, C); 
    print_matrix(C, "A + B");
    // multmat(A, B, D);
    // print_matrix(D, "AxB");
    return 0;
}