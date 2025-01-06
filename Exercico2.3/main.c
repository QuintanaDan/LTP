#include<stdio.h>
#include<locale.h>

leia_vetor(int v[], int tam);
interseccao(int vetA[], int vetB[], int tam);

int main( ){
    setlocale("LC_ALL","");

    int tam;
    printf("\nDigite o tamanho dos vetores A e B: ");
    scanf("%d", & tam);

    int vetA[tam], vetB[tam];

    printf("\n\nVetor A\n");
    leia_vetor(vetA, tam);
    printf("\n\nVetor B\n");
    leia_vetor(vetB, tam);
    numA(vetA, tam);
    numB(vetB, tam);
    interseccao(vetA, vetB, tam);

    return 0;
}
    leia_vetor(int v[], int tam){
        for(int i = 0; i < tam; i++){
            printf("Digite um numero: ");
            scanf("%d", &v[i]);
        }
    }

    numA(int vetA[], int tam){
    printf("\nO vetor A: {");

    for (int i = 0; i < tam; i++){
        printf(" %d  ", vetA[i]);
    }
    printf("}\n");
}

    numB(int vetB[], int tam){
    printf("\nO vetor B: {");
    for (int i = 0; i < tam; i++){
        printf(" %d  ", vetB[i]);
    }
    printf("}\n");
}

    interseccao(int vetA[], int vetB[], int tam){
        printf("\nA Interseccao: { ");
        for(int i = 0; i < tam; i++){
            for(int j = 0; j < tam; j++){
                if(vetA[i] == vetB[j]){
                    printf("%d  ", vetA[i]);
                }
            }
        }
        printf("}\n");

    }
