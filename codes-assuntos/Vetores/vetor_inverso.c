/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

ENUNCIADO: Crie um algoritmo onde é declarado um vetor e seus valores armazenados pelo usuário. 
Deverá ser impresso os valores armazenados no vetor de trás para frente, 
ou seja, do último ao primeiro, utilize o comando de repetição for.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	int vetor[10];
	int i;
	for(i = 0; i <= 9; i++){
		printf("Digite o %d elemento: ", i+1);
		scanf("%d", &vetor[i]);
	}
	for(i = 9; i >= 0; i--){
		printf("%d\t", vetor[i]);
	}
return 0;	
}