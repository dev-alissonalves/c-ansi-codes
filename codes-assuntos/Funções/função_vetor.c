/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

ENUNCIADO: Crie um algoritmo onde é declarada uma função que recebe um vetor como entrada e apresenta quantos valores pares tem. 
Sendo o vetor criado e alimentado na função principal pelo usuário. 
*/

#include <stdlib.h>
#include <stdio.h>


void vetor(int *vet){
	int i, contador = 0;
	for(i = 0; i < 5; i++){
		if(vet[i]%2 == 0){
			contador++;
		}
	}
	printf("A quantidade de valores pares eh: %d\n", contador);
}
int main(){
	int vet[5];
	int i;

	for(i = 0; i < 5; i++){
		printf("Digite o %d elemento do vetor: \n", i+1);
		scanf("%d", &vet[i]);
	}
	vetor(vet);
}