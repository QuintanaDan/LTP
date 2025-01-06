#include <stdio.h>
#include <locale.h>

//PROGRAMA CALCULAR FATORIAL

   int fatorial(int valor){

        int i;
        int totalFatorial = 1;

        for( i = valor; i >= 1; i--){

            if(i != 1){
                printf("%d x ", i);
            }
                else{
                    printf("%d", i);
                    printf("\n");
                }


        totalFatorial = totalFatorial * i;
    }

    return totalFatorial;
}

int main(){
    setlocale(LC_ALL,"");

    int num, total;
    total = 0;

    printf("Digite um numero ao qual deseja calcular seu fatorial: \n");
    scanf("%d", & num);

    printf("\n");

    total = fatorial(num);

    printf("\n");
    printf("O fatorial de %d é: %d", num, total);
    printf("\n");

    return 0;

}
