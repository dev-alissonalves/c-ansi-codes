/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

Enunciado: ENUNCIADO: Crie um algoritmo onde é declarada uma função que recebe os 
valores necessários para calcular e informar o IMC do usuário. 
Calculo do IMC = Peso(Kg)/ Altura²
*/

#include <stdlib.h>
#include <stdio.h>

void calcImc(float p, float a){
	float imc;

	imc = p/(a*a);

	printf("Resultado do IMC eh: %f\n", imc);
}

 
int main(){
	float peso, altura;

	printf("Informa seu peso: \n");
	scanf("%f", &peso);

	printf("Informe sua altura: \n");
	scanf("%f", &altura);

	calcImc(peso, altura);

return 0;	
}
