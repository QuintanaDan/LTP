#include <stdio.h>

//PROGRAMA PARA CALCULAR A ÁREA DE UM RETANGULO

    int main()
    {
        printf("\n\n                      ///////////////////////////////////");
        printf("\n\n                      CALCULADORA DE AREA DE UM RETANGULO");
        printf("\n\n                      ///////////////////////////////////");

        float b, a, h;

        printf("\n\n\nDigite a base do retangulo: ");
        scanf("%f", & b);

        printf("\nDigite a altura do retangulo: ");
        scanf("%f", & a);

        h = b * a;

        printf("\nA area do retangulo eh: %.2f\n\n", h);

        return 0;
    }
