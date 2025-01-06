#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10], i, menor = 99999, maior = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\n\n");

    for (i = 0; i < 10; i++){
        printf("%d ", vet[i]);
        if(menor > vet[i])
            menor = vet[i];
        if(maior < vet[i])
            maior = vet[i];
    }

    printf("\n\nO menor valor eh: %d e o maior valor eh: %d\n\n",menor, maior);

    return 0;
}
