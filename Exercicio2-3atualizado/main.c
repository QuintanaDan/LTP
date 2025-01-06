#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int vetA [6] = {1,2,3,4,5,6}, vetB [6] = {4,5,6,7,8,9};
    int i = 0, j = 0;

    printf("Vetor A: \n{ ");
    for(i = 0; i < 6; i++){
    printf("%d ", vetA[i]);
    }
    printf("}\n\n");

    printf("Vetor B: \n{ ");
    for(i = 0; i < 6; i++){
    printf("%d ", vetB[i]);
    }
    printf("}\n\n");

    printf("A intersecção dos Vetores A e B: \n{ ");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(vetA[i] == vetB[j]){
            printf("%d ", vetA[i]);
            }
        }
    }
    printf("}\n\n");

    return 0;
}
