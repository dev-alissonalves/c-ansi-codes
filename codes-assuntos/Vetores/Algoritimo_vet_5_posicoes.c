/*Praticando by: Oliveira, �lisson - Graduando em Ci�ncias da Computa��o

ENUNCIADO: Crie um algoritmo onde � declarado um vetor de tamanho 5, 
e os valores s�o atribu�dos pelo usu�rio utilizando o comando de repeti��o for.
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
