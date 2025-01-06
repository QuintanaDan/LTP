#include <stdio.h>
#include <locale.h>

//TEMPLATE PADRAO - LINGUAGEM C

int main(int argc, char * argv[]){
    setlocale(LC_ALL,"");
    int senha, senhaCerta;

    printf("Digite a senha que deseja: ");
    scanf("%d", &senhaCerta);

    printf("\n\n\nDigite a senha: ");
    scanf("%d", &senha);


    while(senha!=senhaCerta){
        printf("Senha incorreta!\nDigite novamente:");
        scanf("%d", &senha);
        printf("\n");

    }
        printf("Senha Aceita!");
        printf("\n");

    return 0;

}
