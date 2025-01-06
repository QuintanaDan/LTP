#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha;
    int senhaCorreta;

    printf("Cadastre uma senha: ");
    scanf(" %d",&senha);



    while(senha != senhaCorreta){
        printf("\nDigite a senha: ");
        scanf(" %d",&senhaCorreta);
            if(senha == senhaCorreta){
                printf("\nAcesso Liberado!\n");
            }else{
                printf("Senha Incorreta!\n");
        }
    }
    return 0;
}
