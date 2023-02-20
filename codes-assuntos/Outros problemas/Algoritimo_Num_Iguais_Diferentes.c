/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

ENUNCIADO: Crie um algoritmo onde é solicitado dois valores inteiros para o usuário e armazenados na variável 'N1' e 'N2'. 
O algoritmo deverá informar se os valores são iguais ou diferentes.
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
