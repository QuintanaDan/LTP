#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    float nota1, nota2, nota3, media;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota2);

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nA média das notas %.1f, %.1f e %.1f é: %.1f \n\n", nota1, nota2, nota3, media);


    return 0;
}
