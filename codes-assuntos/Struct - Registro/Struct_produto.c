/*Praticando by: Oliveira, Álisson - Graduando em Ciências da Computação

ENUNCIADO: Crie um algoritmo onde é declarada um registro com a marca, fabrica e quantidade. 
Na função principal uma variável heterogênea deverá ser declarada e seus valores atribuídos pelo usuário. 
Em seguida, as informações deverão ser impressas na tela.
*/

#include <stdlib.h>
#include <stdio.h>

struct dados
{
	char fabrica[20];
	char marca[20];
	int quantidade;
};

int main(){
	struct dados produto;

	printf("Digite o nome da fabrica que fornecera o produto: \n");
	scanf("%s",&produto.fabrica);

	printf("Digite a marca do produto: \n");
	scanf("%s",&produto.marca);

	printf("Digite a quantidade: \n");
	scanf("%d",&produto.quantidade);

	printf("A fabrica fornecedora eh: %s\nA marca do produto eh: %s\nE a quantidade requerida foi: %d\n\n", produto.fabrica, produto.marca, produto.quantidade);
return 0;
}