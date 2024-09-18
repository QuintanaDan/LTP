#include <stdio.h>

//\nPROGRAMA QUE LE 2 NUMEROS E FAZ AS 4 OPERACOES\n

int main()
{
    printf("\n\n                                     ~~~~~~~~~~~~~~");
    printf("\n\n                                     AS 4 OPERAÇOES");
    printf("\n\n                                     ~~~~~~~~~~~~~~");

    int n1, n2;

    printf("\n\n\nDigite um numero inteiro: ");
    scanf("%d", & n1);

    printf("\nDigite outro numero inteiro: ");
    scanf("%d" , & n2);

    printf("\n");

    printf("A soma dos numeros eh............: %d\n", n1 + n2);
    printf("A subtracao dos numeros eh.......: %d\n", n1 - n2);
    printf("A divisao dos numeros eh.........: %d\n", n1 / n2);
    printf("A multiplicacao dos numeros eh...: %d\n", n1 * n2);

    return 0;
}
