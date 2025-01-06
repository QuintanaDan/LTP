#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int num, i;
    int a = 1, b = 1, prox;

    printf("\nDigite a quantidade de numeros da sequencia de Fibonacci que quer que apareça: ");
    scanf("%d", &num);

    printf("\nOs primeiros %d números da sequência de Fibonacci são:\n", num);

    for (i = 0; i < num; i++) {
        if (i == 0) {
            printf("%d ", a);
            continue;

        }
        if (i == 1) {
            printf("%d ", b);
            continue;

        }
        prox = a + b;
        a = b;
        b = prox;
        printf("%d ", prox);
    }

    printf("\n\n");
    return 0;
}

