#include <stdio.h>

//SOMA DE 10 NUMEROS

int main()
{
    printf("\n\n                                  ++++++++++++++++++");
    printf("\n\n                                  SOMA DE 10 NUMEROS");
    printf("\n\n                                  ++++++++++++++++++");

    int valor, soma = 0, i = 1;



    printf("\n");

    while(i <= 10) {

        printf("\n\n\nDigite um numero: ");
        scanf("%d", & valor);
        soma = soma + valor;

        i++;

    }

    printf("\n A soma dos 10 numeros eh %d  \n", soma);
    return 0;
}
