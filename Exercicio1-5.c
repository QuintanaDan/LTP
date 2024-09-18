#include <stdio.h>

//PROGRAMA PARA IDENTIFICAR MAIOR OU MENOR DE IDADE

    int main()
    {
        printf("\n\n                             +++++++++++++++++++++++");
        printf("\n\n                             MAIOR OU MENOR DE IDADE");
        printf("\n\n                             -----------------------");
        int i;

        printf("\n\n\nDigite a sua idade: ");
        scanf("%d", & i);

        if(i >= 18){
                printf("\n\n Por ter %d anos de idade, voce ja eh maior de idade.\n\n", i);
        }
                else{
                    printf("\n\n Devido voce ter apenas %d anos, voce ainda eh menor de idade.\n\n", i);
                }

        return 0;
    }
