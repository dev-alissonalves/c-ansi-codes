/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

Enunciado: Crie um algoritmo onde é declarada uma função que recebe dois valores inteiros sendo enviado pela função principal, 
e seus valores informados pelo usuário. A função deverá imprimir o maior valor, ou se eles são iguais.
*/

#include <stdlib.h>
#include <stdio.h>

void valsInt(int x, int y){
	//int x, y;

	if(x == y){
		printf("Os valores informados são de valores iguais!\n");
	}else if(x > y){
		printf("O maior valor eh o primeiro valor informado = : %d\n", x);
	}else{
		printf("O maior valor eh o segundo valor informado = : %d\n", y);
	}
}

int main(){
	int valor1, valor2;

	printf("Digite um valor inteiro: \n", valor1);
	scanf("%d", &valor1);

	printf("Digite um segundo valor inteiro: \n", valor2);
	scanf("%d", &valor2);

	valsInt(valor1, valor2);

return 0;	
}
