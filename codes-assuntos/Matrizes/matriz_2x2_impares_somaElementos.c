/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

ENUNCIADO: Em uma matriz 2x2, solicitar os valores a serem armazenados para o usuário.
Apos isso, mostrar a soma total de todos os valores informados pelo usuário. E por ultimo
Informar quantos valores informados são pares e impares.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	int matriz[2][2];
	int i, j;
	int soma = 0, contador1 = 0;

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Digite o elemento da linha %d e da coluna %d\n", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			soma = soma + matriz[i][j];
			if(matriz[i][j]%2 != 0){
				contador1++;
			}
		}
	}
	printf("A matriz preenchida eh: \n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	printf("A soma de todos os elementos da matriz eh: %d\n", soma);
	printf("A quantidade de numeros impares eh: %d\n", contador1);

return 0;	
}