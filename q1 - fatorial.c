#include<stdlib.h>
#include<stdio.h>

int main(void){
int num, cont, fat =1;
   printf("Calculo do Fatorial!\n\n");
   printf("Digite o numero: \n");
   scanf("%d", &num);
   for(cont = num; cont > 1; cont--){
      fat *= cont;
   }
   printf("O fatorial de %d eh: %d\n\n", num, fat);
system("pause");
}
