#include <stdio.h>

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

int main()
 {
    int num, total;
    total = 0;

    printf("Digite um numero ao qual deseja calcular seu fatorial: \n");
    scanf("%d", & num);

    printf("\n");

    total = fatorial(num);

    printf("\n");
    printf("O fatorial de %d eh: %d", num, total);

    return 0;

}
