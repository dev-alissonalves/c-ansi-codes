/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

ENUNCIADO: Crie um algoritmo onde é declarado um vetor de tamanho 5, 
e os valores são atribuídos pelo usuário utilizando o comando de repetição for.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int vet[5];
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("Insira o %do valor para ser inserido no vetor:  ", i+1);
		scanf("%d", &vet[i]);
	}
	printf("Os valores do vetor de 5 posicoes eh:\n");
	
	for(i = 0; i < 5; i++)
		printf("%d\t", vet[i]);
		
	printf("\n");
system("pause");
}
