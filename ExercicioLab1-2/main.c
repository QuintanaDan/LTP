#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int num1, num2;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &num1);

    printf("\nDigite o segundo número: ");
    scanf("%d", &num2);

    printf("\nO resultado da soma dos números %d e %d é: %d\n\n", num1, num2, (num1 + num2));

    return 0;
}
