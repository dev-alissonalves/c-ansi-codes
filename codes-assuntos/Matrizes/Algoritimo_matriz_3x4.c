/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

Enunciado: : Crie um algoritmo onde é declarada uma matriz de tamanho 3x4, 
sendo os valores atribuídos pelo usuário utilizando comandos de repetição for. 
*/

#include <stdlib.h>
#include <stdio.h>

int main(void){
	int matriz [3][4];
	int linha, coluna;
	
	
	printf("----------Insercao de valores dos elementos da MATRIZ----------\n\n");
	printf("Digite os valores para a MATRIZ!\n\n");
	for(linha = 1; linha <= 3; linha++)
	{
		for(coluna = 1; coluna <= 4; coluna++)
		{
			printf("Elemento posicionado na - LINHA %d e na COLUNA %d =  ", linha+1, coluna+1);
			scanf("%d", &matriz[linha][coluna]);
		}
		system("cls");
		printf("----------Insercao de valores dos elementos da MATRIZ----------\n\n");
		printf("Digite os valores para a MATRIZ!\n\n");
	}
	system("cls");
	printf("\n");		
	printf("----------Saida de dados da matriz----------\n\n");
	
	for(linha = 1; linha <= 3; linha++){
		for(coluna = 1; coluna <= 4; coluna++)
		{
			printf("%d\t", matriz[linha][coluna]);
		}
		printf("\n");
	}
	printf("\n\n");	
system("pause");
return 0;
}
