/*Praticando by: Oliveira, �lisson - Graduando em Ci�ncias da Computa��o

Enunciado: Crie um algoritmo onde � solicitado um valor inteiro para o usu�rio 
e armazenado na vari�vel 'idade'. 
O algoritmo dever� informar se essa idade � maior ou menor de idade.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	int idade;

	printf("O usuario devera digitar um numero inteiro correspondente a sua idade:\n");
	scanf("%d",&idade);	
	
	if(idade < 18){
		printf("Usuario menor de idade!\n\n");	
	}else
	{
		printf("Usuario maior de idade!\n\n");
	}
system("pause");
return 0;	
}