/*Fa�a um programa que leia n n�meros reais e calcule a m�dia, o maior n�mero
e sua posi��o no vetor.*/
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    int posicao, cont = 0, qtdNum = 0;
    float vet[100], numMaior = 0, media=0, *p;         
    printf("Digite a quantidade de numeros: \n");
    scanf("%d",&qtdNum);
    
    /* Alocacao de mem�ria*/
    
	p = (float*) malloc(sizeof(float)*qtdNum);
    
	/*Checagem*/
	
	if(p == NULL)
    {
    	printf("Acesso NULO!");
    	return 0;
    }else
	{
		/*Recebendo os dados*/
		
    	for(cont=0; cont < qtdNum; cont++)
		{
       		printf("Digite o %do. numero: ", cont+1);
       		scanf("%f",(vet + cont));
    	}                       
    	
		/*Soma dos elementos do vetor e C�lculo da m�dia*/
    	
		for(cont=0; cont<qtdNum; cont++)
		{
       		media += *(vet+cont);
    	}
    	
		/*C�lculo do maior numero na posi��o do vetor*/                             
    	
		printf("A media eh: %.2f\n",(media/qtdNum));
    	for(cont=0; cont<qtdNum; cont++)
		{
       		if(*(vet+cont) > numMaior)
	   		{
        		numMaior = *(vet + cont);
        		posicao = cont;
       		} 
    	}
	}
    
	/*Impress�o dos dados!*/                                                    
    
	printf("O maior numero eh %.2f\ne sua pocicao eh %d\n", numMaior, posicao+1);
 	free(p);
	return 0;
}

