#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ //corpo do programa
    setlocale(LC_ALL,"");//inserindo a biblioteca locale

    //declaração das variaveis
    int i, j, mat[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}, rota[4][4];

    //função de impressão da matriz principal
    printf("Matriz\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
    //função de rotação da matriz
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
          rota[j][4 - 1 - i] = mat[i][j];
        }
    }

    //função de impressão da matriz rotacionada
    printf("\n\nMatriz Rotacionada 90°: \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%2d ", rota[i][j]);
        }
        printf("\n");
    }


    return 0;
}
