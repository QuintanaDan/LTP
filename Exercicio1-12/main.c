#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    int palpite;

    srand(time(NULL));

    num = rand() %10;

    printf("Digite um numero de 0 a 9: ");
    scanf(" %d", &palpite);

     if(palpite < num){
                printf("\nValor muito baixo!\n");
            }if(palpite > num){
                    printf("\nValor muito alto!\n");
            }if(palpite == num){
                printf("\nAcerto Miseravi!!!\n\n");
            }

    while(palpite != num){
        printf("\nTente outra vez!");
        printf("\nDigite um numero de 0 a 9: ");
        scanf(" %d", &palpite);
            if(palpite < num){
                printf("\nValor muito baixo!\n");
            }if(palpite > num){
                    printf("\nValor muito alto!\n");
            }if(palpite == num){
                printf("\nAcerto Miseravi!!!\n\n");
            }
    }


    return 0;
}
