
#include <stdio.h>

//PROGRAMA CALCULADORA

    int main()
    {
        printf("\n\n                                  ===========");
        printf("\n\n                                  CALCULADORA");
        printf("\n\n                                  ===========");

        int n1, n2, total;
        char operacao;

        printf("\n\n\nDigite o primeiro numero: ");
        scanf("%d", & n1);

        printf("\nDigite o segundo numero: ");
        scanf("%d", & n2);

        printf("\n Operacoes");
        printf("\n\nPara adicao digite..........:  [ + ] ");
        printf("\nPara subtracao digite.......:  [ - ] ");
        printf("\nPara multiplicacao digite...:  [ * ]");
        printf("\nPara divisao digite.........:  [ / ] ");
        printf("\nPara mod digite.............:  [ % ]");
        printf("\n\nDigite a operacao a ser realizada: ");
        scanf(" %c", & operacao);

        switch(operacao)
        {
            case '+': total = n1+n2; break;
            case '-': total = n1-n2; break;
            case '*': total = n1*n2; break;
            case '/': total = n1/n2; break;
            case '%': total = (n1+n1)%2; break;

            default: {
                printf("Operação invalida!");
                return 0;
            }
        }
        printf("\n\n O total da operacao eh: %d  %c  %d = %d \n\n", n1, operacao, n2, total);

        return 0;
    }
