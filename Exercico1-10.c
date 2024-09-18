#include <stdio.h>
#include <locale.h>

int main(int argc, char * argv[]){
    setlocale("LC_ALL", "");

    float n, soma;
    int i=0;

    printf("Digite as nota(Digite -1 para encerrar): \n");

    while(1){
        printf("Nota %d:", i +1);
        scanf("%f", & n);

        if(n == -1){
            break;
        }
        soma += n;
        i++;
   }

   if(i == 0){
    printf("Nenhuma nota foi inserida. \n");

   }else{
    float media = soma/ i;
    printf("A média das notas é %.2f \n", media);
   }


    return 0;
}
