/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

ENUNCIADO: Crie um algoritmo onde é declarada uma matriz de tamanho 2x3, 
sendo os valores atribuídos pelo usuário multiplicado por 2, utilize comandos de repetição for.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	int matriz[2][3];
	int linha, coluna;

	printf("----------Insercao de valores dos elementos da MATRIZ----------\n\n");
	printf("Digite os valores para a MATRIZ!\n\n");
	for(linha = 0; linha < 2; linha++)
	{
		for(coluna = 0; coluna < 3; coluna++)
		{
			printf("Elemento posicionado na - LINHA %d e na COLUNA %d =  ", linha+1, coluna+1);
			scanf("%d", &matriz[linha][coluna]);
		}
		printf("\n");
	}	
	printf("----------Saida de dados da matriz----------\n\n");
	
	for(linha = 0; linha <= 1; linha++){
		for(coluna = 0; coluna <= 2; coluna++)
		{
			printf("%d\t", 2*matriz[linha][coluna]);
		}
		printf("\n");
	}

	printf("\n\n");
system("pause");
return 0;	
}