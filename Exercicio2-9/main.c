#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ //corpo do programa
    setlocale(LC_ALL,"");//inserindo a biblioteca locale

    //declaração das variaveis
    int i, j, mat[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    //função de impressão da matriz principal
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    //função de impressão da diagonal principal
    printf("\n\nDiagonal principal: \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i == j)
            printf("%2d ", mat[i][j]);
            else
            printf(" ");
        }
        printf("\n");
    }

    //função de impressão da diagonal secundária
    printf("\n\nDiagonal secundaria: \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i + j == 3)
            printf("%2d ", mat[i][j]);
            else
            printf(" ");
        }
        printf("\n");
    }


    return 0;
}
