/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

Enunciado: : Crie um algoritmo onde é solicitado um valor inteiro para o usuário e armazenado na variável 'N'. 
O algoritmo deverá informar se esse valor é "Par" ou "Impar".
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	int N;
	
	printf("Usuario devera digitar um valor inteiro:\n");
	scanf("%d",&N);
	
	if(N%2 == 0)
	{
		printf("O numero correspondente eh PAR!\n\n");
	}
	else
	{
		printf("O numero correspondente eh IMPAR!\n\n");
	}
	
system("pause");
return 0;	
}
