#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int i, j, mat[3][3];
    int lin, col;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite os numeros da matriz: ");
            scanf(" %d", &mat[i][j]);
        }
    }

    printf("\n A matriz é: \n");
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                printf(" %2d ", mat[i][j]);
        }
            printf("\n");
    }

    printf("\nPara encontrar um elemento especifico na matriz\nEscolha a linha: ");
    scanf(" %d", &lin);

    printf("Escolha a coluna: ");
    scanf(" %d", &col);

    printf("\nO elemento encontrado na linha %d e coluna %d foi: %d", lin, col, mat[lin][col]);
    printf("\n");

    return 0;
}
