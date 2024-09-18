#include <stdio.h>

int count = 0;

void moverDiscos(int n,char origem, char destino, char auxiliar);

int main(){
  
   int n;
  
   printf("Insira o numero de discos: ");
   scanf("%d", &n);

   moverDiscos(n,'a','c','b');
   return 0;
}

void moverDiscos(int n, char origem, char destino,char auxiliar){
   if (n == 1){
       printf(" %d move disco de 1 de %c para %c\n", ++count, origem, destino);

       return;
   }

   moverDiscos(n-1, origem, auxiliar, destino);
   printf("%d - move disco %d de %c para %c\n", ++count, n, origem,destino);
   moverDiscos(n-1, auxiliar,destino, origem);
}