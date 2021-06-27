/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

ENUNCIADO: Crie um algoritmo onde é declarada uma função que recebe dois valores inteiros sendo enviado pela função principal, 
e seus valores informados pelo usuário. A função deverá multiplicar esses valores entre si e 
retornar o resultado para a função principal que deverá imprimir esse resultado.
*/

#include <stdlib.h>
#include <stdio.h>

int valores(int x, int y){
	int resultado;

	resultado = x * y;

	return (resultado);
}

int main(){
	int val1, val2, multiplicados;

	printf("Insira um valor inteiro: \n");
	scanf("%d", &val1);

	printf("Insira um segundo valor inteiro: \n");
	scanf("%d", &val2);
	valores(val1, val2);

	multiplicados = valores(val1, val2);

	printf("A multiplicacao entre si eh: %d\n", multiplicados);

return 0;
}