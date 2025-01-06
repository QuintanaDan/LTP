#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num;

    printf("Digite um numero para saber se ele é primo: ");
    scanf("%d", &num);

    if(num % 2 == 0){
    printf("\nO numero %d não é primo!\n\n", num);
    }
    else{
    printf("\nO numero %d é primo!\n\n", num);
    }

    return 0;
}
