
//Abstract : Matrix Multiplication

#include <stdio.h>

#define N 10

int main() {
    int i, j, k;
    int A[N][N], B[N][N], C[N][N] = {0};

    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            A[i][j] = (j % 10) + 1;
        }
    }

    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            B[i][j] = (j % 10) + 1;
        }
    }

    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            for(k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\n\nFirst matrix:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n\nSecond matrix:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\n\nResultant matrix:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}

