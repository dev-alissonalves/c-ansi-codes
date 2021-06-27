/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

ENUNCIADO: Crie um algoritmo onde é declarado duas variáveis inteiras
 e seus valores atribuídos pelo usuário. Mostre a soma desses valores.
*/
#include <stdio.h>
#include <stdlib.h>

 int main(){
 	int valor1, valor2, soma;

 	printf("Digite o valor 1: \n");
 	scanf("%d", &valor1);

 	printf("Digite o valor 2: \n");
 	scanf("%d", &valor2);

 	soma = valor1 + valor2;

 	printf("A soma eh:%d \n",soma);

 return 0;
 }