/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

ENUNCIADO: Crie um algoritmo onde é declarada um registro com as informações necessárias para calcular o IMC do usuário. 
Na função principal uma variável heterogênea deverá ser declarada e seus valores atribuídos pelo usuário.
*/

#include <stdlib.h>
#include <stdio.h>

struct imc
{
	float peso, altura;
};

int main(){
	float resultado;
	struct imc calc; /* Declaracao da Variavel heterogenea calc que acessa as informacoes do registro*/
	printf("Digite o seu peso: \n");
	scanf("%f", &calc.peso);

	printf("Digite a sua altura: \n");
	scanf("%f", &calc.altura);

	resultado = calc.peso/(calc.altura*2);

	printf("Seu IMC eh: %f\n\n", resultado);
}