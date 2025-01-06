#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int vet [6] = {1,2,3,4,5,6};
    int aux, i = 0;

    printf("O vetor é:\n{ ");
    for(i = 0; i < 6; i++){
    printf("%d ", vet[i]);
    }
    printf("}\n\n");

    for (int i = 0; i < 6 / 2; i++) {
    aux = vet[i];
    vet[i] = vet[6 - 1 - i];
    vet[6 - 1 - i] = aux;
    }

    printf("\n\nO vetor invertido é:\n{ ");
    for(i = 0; i < 6; i++){
    printf("%d ", vet[i]);
    }
    printf("}\n\n");

    return 0;
}
