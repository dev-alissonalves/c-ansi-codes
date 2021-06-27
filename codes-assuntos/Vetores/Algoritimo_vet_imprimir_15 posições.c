/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

Enunciado: Crie um algoritmo onde é impresso os valores de 0 a 15 utilizando o comando de repetição for.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	int vet[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int i = 0;
	
	for(i = 0; i <= 15; i++)
	{
		printf("%d\n", vet[i]);
		
	}
	
system("pause");
return 0;	
}
