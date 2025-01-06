#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num1, num2, aux;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("\nDigite outro número: ");
    scanf("%d", &num2);

    printf("\nA num1 é: %d \no num2 é: %d\n", num1, num2);

    aux = num1;
    num1 = num2;
    num2 = aux;

    printf("\nAgora a num1 é: %d \n e o num2 é: %d\n\n", num1, num2);

    return 0;
}
