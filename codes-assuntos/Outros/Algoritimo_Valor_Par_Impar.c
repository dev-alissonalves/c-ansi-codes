/*Praticando by: Oliveira, �lisson - Graduando em Ci�ncias da Computa��o

Enunciado: : Crie um algoritmo onde � solicitado um valor inteiro para o usu�rio e armazenado na vari�vel 'N'. 
O algoritmo dever� informar se esse valor � "Par" ou "Impar".
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
