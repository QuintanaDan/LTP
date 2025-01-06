#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, mat[4][4];
    int soma = 0;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite numeros para preencher a matriz: ");
            scanf(" %d", &mat[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i < j)
            soma = soma + mat[i][j];
        }
    }

    printf("\nA soma dos numeros acima da diagonal principal eh: %d\n", soma);

    return 0;
}
