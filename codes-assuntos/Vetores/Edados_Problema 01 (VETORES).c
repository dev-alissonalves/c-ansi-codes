/*Alisson Oliveira - Graduando em Ciencias da Computaçao
Estrutura de dados - Problemas utilizando vetores

Problema 01: Faça um programa que peça ao usuário para digitar 10 números:
A) Exiba todos os números digitados
B) Exiba apenas os números pares
C) Exiba ímpares
D) Mostre os dados na ordem decrescente ao que foram digitados
E) Mostre a somatória de todos os dados digitados
F) Mostre a média aritmética dos dados digitados.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	int vetor[10];
	int i;
	int somatorio = 0;

	for(i = 0; i < 10; i++){
		printf("%do Os numeros armazenados no vetor: ",i+1);
		scanf("%d", &vetor[i]);
	}
	printf("\n");
	/*Exibicao de todos os numeros armazenados*/
	printf("Os numeros armazenados sao: \n");
	for(i = 0; i < 10; i++){		
		printf("%d \t",vetor[i]);
	}
	printf("\n");
	/*Exibiçao dos numeros pares*/
	printf("Os numeros pares armazenados sao: \n");
	for(i = 0; i < 10; i++){
		if(vetor[i]%2 == 0){
			printf("%d \t",vetor[i]);
		}		
	}
	printf("\n");
	/*Exibiçao dos numeros impares*/
	printf("Os numeros impares armazenados sao: \n");
	for(i = 0; i < 10; i++){
		if(vetor[i]%2 != 0){
			printf("%d \t",vetor[i]);
		}
	}
	printf("\n");
	/*Mostrando os dados na ordem decrescente*/
	printf("Os numeros na ordem descrescente sao: \n");
	for(i = 9; i >= 0; i--){		
		printf("%d \t",vetor[i]);
	}
	printf("\n");
	/*Mostrando o somatorio de todos os dados digitados*/
	printf("O somatorio dos numeros digitados eh: \n");
	for(i = 0; i < 10; i++){		
		somatorio = somatorio + vetor[i];
	}
	printf("%d\n",somatorio);
	printf("A media aritmetica eh: %d\n", somatorio/10);

return 0;
}