/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

ENUNCIADO: Crie um algoritmo onde é solicitado um valor inteiro para o usuário e armazenado na variável 'N'. 
O algoritmo deverá imprimir os valores de 0 até 'N' utilizando o comando de repetição for.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	int N = 0, i = 0;
	int vet[N];
	
	printf("Insira um valor inteiro:  ");
	scanf("%d", &N);
	
	printf("Impressao eh dada por:\n\n");
	for(i = 0; i <= N; i++)	
		printf("%d\t", i);
				
	printf("\n");		
system("pause");
return 0;
}
