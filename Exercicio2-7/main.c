#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int I = 4 , J = 3;
    int i,j, mat[I][J], trans[J][I];


    for(i = 0; i < I; i++){
        for(j = 0; j < J; j++){
            printf("Digite os numeros da matriz: ");
            scanf(" %d", &mat[i][j]);
    }
        }

    printf("\nA matriz é: \n");
    for(i = 0; i < I; i++){
        for(j = 0; j < J; j++){
            printf(" %3d ", mat[i][j]);

    }
            printf("\n");
        }


    for(i = 0; i < I; i++){
        for(j = 0; j < J; j++){
           trans[j][i] = mat[i][j];
        }
    }

    printf("\nMatriz Transposta é: \n");
        for(i = 0; i < J; i++){
            for(j = 0; j < I; j++){
                printf("%3d ", trans[i][j]);
            }
            printf("\n");
        }

        return 0;
}
