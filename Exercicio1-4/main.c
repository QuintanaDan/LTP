#include <stdio.h>

//PROGRAMA PAR OU IMPAR

    int main()
    {
        printf("\n\n                                   ------------");
        printf("\n\n                                   PAR OU IMPAR");
        printf("\n\n                                   ------------");

        int num, resto;


        printf("\n\n\nInforme um numero inteiro: ");
        scanf("%d", & num);

        resto = num % 2;

        if(resto == 0){
                printf("\n\n O numero %d eh PAR.\n", num);
        }
                else{
                    printf("\n\n O numero %d eh IMPAR.\n", num);
                }

        return 0;
    }
