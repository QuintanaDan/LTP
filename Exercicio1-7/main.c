#include <stdio.h>

//PROGRAMA DE TABUADA

int main()
{
    printf("\n\n                                        *******");
    printf("\n\n                                        TABUADA");
    printf("\n\n                                        *******");

    int num, i;

    printf("\n\n\nDigite um numero inteiro: ");
    scanf("%d", & num);

    i = 0;

    printf("\n");

    while(i < 10) {
        i = i + 1;
        printf("%d x %d = %d \n", num, i ,(num*i));
    }
    return 0;
}
