#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int i, j, matA[3][3] = {1,2,3,4,5,6,7,8,9}, matB[3][3] = {5,8,4,2,3,9,7,3,1}, soma[3][3];

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                soma[i][j] = matA[i][j] + matB[i][j];
            }
        }
    printf("\nMatriz A: \n");
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++)
                printf("%2d ", matA[i][j]);
                printf("\n");
        }

    printf("\nMatriz B: \n");
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++)
                printf("%2d ", matB[i][j]);
                printf("\n");
        }

        printf("\nA soma das matrizes é: \n\n");
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++)
                printf("%2d ", soma[i][j]);
                printf("\n");
        }

    return 0;
}
