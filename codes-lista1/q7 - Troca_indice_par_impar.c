/*7 - Ler uma sequência de n números inteiros, trocar os elementos
de índice par pelo elemento de índice ímpar consecutivo.*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int seqNum, vet[100], cont, aux, *p;
    
	/* Recebendo os dados */
    
	printf("Digite quantos elementos tera a sequencia: ");
    scanf("%d",&seqNum);
    
	/*Alocacao de Memoria*/
    
    p = (int*)malloc(sizeof(int)*seqNum);
    
	/*Checagem*/
    
    if(p == NULL)
    {
    	printf("Acesso NULO!");
    	return 0;
    }else
	{
    	for(cont=0; cont<seqNum; cont++)
		{
        	printf("Indice: \n");
        	scanf("%d",(vet + cont));
    	}
    	/* Trocando os elementos */                                
    	for(cont=0; cont<seqNum; cont++)
		{
       		if(cont%2 == 0 && (cont + 1) < seqNum)
	   		{
          		aux =*(vet + (cont+1));
          		*(vet + (cont+1)) = *(vet + cont);
          		*(vet + cont) = aux;
       		}    
    	}
    }
    /* Impressao resultado final */   
    for(cont=0; cont<seqNum; cont++)
	{      
       printf("\n%d\n", *(vet + cont));  
    }        
	free(p);  
	return 0;
}    
