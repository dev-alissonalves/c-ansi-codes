/*Praticando by: Oliveira, �lisson - Graduando em Ci�ncias da Computa��o

Enunciado: ENUNCIADO: Crie um algoritmo onde � solicitado um valor inteiro para o usu�rio e armazenado na vari�vel 'N'. 
O algoritmo dever� imprimir os valores pares de 1 at� 'N' utilizando o comando de repeti��o for.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	int N = 0, i = 0;
	int vet[N];
	
	printf("Insira um valor inteiro:  ");
	scanf("%d", &N);
	
	printf("Impressao eh dada por:\n");
	for(i = 0; i <N; i++)
		printf("%d\t", i+1);
	
	printf("\n");			
system("pause");
return 0;	
}
