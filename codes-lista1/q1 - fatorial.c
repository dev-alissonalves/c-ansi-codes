#include<stdlib.h>
#include<stdio.h>

int main(void){
int num, cont, fat =1;
   printf("Calcular fatorial\n\n");
   printf("Digite o numero: \n");
   scanf("%d", &num);
   for(cont = num; cont > 1; cont--){
      fat *= cont;
   }
   printf("O fatorial de %d eh: %d\n\n", num, fat);
system("pause");
}
