#include <stdio.h>

int main(void) {
	long a=5; 
	long *aPrt = &a; /*variavel "a" armaz. no ponteiro*/
	
	/*printf("Conteudo do ponteiro: %ld\n",*aPrt);*/
	printf("Conteudo da variavel que o ponteiro aponta: %ld\n", *aPrt);
	/*printf("End. mem. do cont. do ponteiro: %x\n",&aPrt);*/
	printf("End. mem. do ponteiro: %x\n",&aPrt);
	/*printf("Endereco de memoria do ponteiro: %x\n",aPrt);*/
	printf("Endereco de memoria da variavel que o ponteiro armazena (conteudo do ponteiro): %x\n",aPrt);
	/*endereço de a*/
	printf("endereço de a: %x\n", &a);
}
