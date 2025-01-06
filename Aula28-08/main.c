#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(int argc, char * argv[]){
    setlocale(LC_ALL,"");

    char str1[100], str2[100], str3[100];
    str3 = ster1, str2;
    size_t len = strlen(str3);

    printf("\nDigite o seu nome: ");
    fgets(str1, sizeof(str1), stdin);

    printf("\nDigite o seu sobrenome: ");
    fgets(str2, sizeof(str2), stdin);

    printf("\nSeu nome é: %s\n", str1);
    printf("O seu sobrenome é: %s\n", str2);

    strcpy(str3, str1);
    printf("Copia de str1 para str3: %s\n", str3);

    strcat(str3, str2);
    printf("Seu nome inteiro é: %s\n", str3);

    printf("O seu nome inteiro tem %zu letras.\n", len);

    return 0;

}
