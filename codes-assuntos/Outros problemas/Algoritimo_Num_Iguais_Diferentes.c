/*Praticando by: Oliveira, �lisson - Graduando em Ci�ncias da Computa��o

ENUNCIADO: Crie um algoritmo onde � solicitado dois valores inteiros para o usu�rio e armazenados na vari�vel 'N1' e 'N2'. 
O algoritmo dever� informar se os valores s�o iguais ou diferentes.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int N1, N2;
	
	printf("Primeiro valor inteiro:  ");
	scanf("%d", &N1);
	system("cls");
	
	printf("Segundo valor inteiro:  ");
	scanf("%d", &N2);
	system("cls");
	
	if(N1 == N2)
	{
		printf("Os numeros informados sao de valores iguais!\n\n\n");
	}
	else
	{
		printf("Os numeros informados sao de valores distintos!\n\n\n");
	}
system("pause");
}
