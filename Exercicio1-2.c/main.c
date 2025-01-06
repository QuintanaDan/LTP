#include <stdio.h>

//PROGRAMA PARA CONVERTER CELSIUS EM FAHRENHEIT

    int main()
    {

    printf("\n\n                          *********************************");
    printf("\n\n                          CONVERSOR CELSIUS PARA FAHRENHEIT");
    printf("\n\n                          *********************************");

    float c,f;

        printf("\n\n\nDigite a temperatura em Celsius: ");
        scanf("%f", & c);

        f = c * 9/5 + 32;

        printf("\nA temperatura %.1f Celsius convertida para Fahrenheit eh: %.1f", c, f);

        printf("\n\n");

        return 0;
    }
