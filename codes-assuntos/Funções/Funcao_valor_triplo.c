/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

Enunciado: Crie um algoritmo onde é declarada uma função que recebe um valor inteiro sendo enviado pela função principal,
e seu valor informado pelo usuário. A função deverá imprimir o triplo do valor recebido. 
*/

#include <stdlib.h>
#include <stdio.h>

void valInt(int x){
	int resultado = 0;

	resultado = x * 3;
	printf("O triplo do valor informado eh: %d\n", resultado);
}

int main(){
	int valor;
	printf("Digite um valor inteiro:\n");
	scanf("%d",&valor);

	valInt(valor);
return 0;	
}
