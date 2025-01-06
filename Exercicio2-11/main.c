#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 5

int isIdentityMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            // Verifica se os elementos da diagonal são 1s
            if (i == j && matrix[i][j] != 1) {
                return 0; // Não é identidade
            }
            // Verifica se os elementos fora da diagonal são 0s
            if (i != j && matrix[i][j] != 0) {
                return 0; // Não é identidade
            }
        }
    }
    return 1; // É identidade
}

int main(){ //corpo do programa
    setlocale(LC_ALL,"");//inserindo a biblioteca locale1

    int matrix[SIZE][SIZE];

    // Leitura da matriz
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Verifica se é matriz identidade
    if (isIdentityMatrix(matrix)) {
        printf("A matriz é identidade.\n");
    } else {
        printf("A matriz não é identidade.\n");
    }

    return 0;
}
