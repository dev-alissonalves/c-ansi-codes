/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

Enunciado: Crie um algoritmo onde é solicitado um valor inteiro para o usuário 
e armazenado na variável 'idade'. 
O algoritmo deverá informar se essa idade é maior ou menor de idade.
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