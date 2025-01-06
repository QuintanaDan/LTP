#include <stdio.h>
#include<locale.h>

inverter(int v[], int ini, int fim, int aux);
imprimir(int v[], int tam);
leia_vetor(int v[], int tam);

int main(int argc, char * argv[]){
    setlocale("LC_ALL", "");

    int tam, ini, fim, aux;
    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", & tam);

    int v[tam];

    printf("\n\nVetor\n");

    leia_vetor(v, tam);
    inverter( v, ini, fim, aux);
    imprimir(v, tam);

    return 0;
}

    leia_vetor(int v[], int tam){
        for(int i = 0; i < tam; i++){
            printf("Digite um numero: ");
            scanf("%d", &v[i]);
        }
    }

    inverter(int v[ ], int ini, int fim){
        int aux;
        if(ini < fim){
            aux = v[x];
            v[x] = v[fim];
            v[fim] = aux;
            inverter(v, x + 1, fim - 1);
    }
}

    imprimir(int v[], int tam){
        if(tam == 1)
            printf("%d, ", v[tam - 1]);
        else{
            imprimir(v, tam - 1);
            printf("%d, ", v[tam - 1]);
        }
    }
