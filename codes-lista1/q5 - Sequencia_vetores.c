#include<stdlib.h>
#include<stdio.h>
int main (void){
    int numSeq, aux=0;
    int vet[100],vet2[100], vetResp[100], cont;
    /*Obtenção da quantidade de números da sequência */
    printf("Digite Quantos numeros deseja obter nas duas sequencias:\n ");
    scanf("%d",&numSeq);
    /* Pegando os dados da primeira sequência*/
    for(cont=0;cont<numSeq;cont++){
       printf("Digite o %do. numero da primeira sequencia:\n ",cont+1); 
       scanf("%d",&vet[cont]); 
    }                          
    printf("\n");
    /* Pegando os dados da segunda sequência*/
    for(cont=0;cont<numSeq;cont++){
       printf("Digite o %do. numero da segunda sequencia:\n ",cont+1);
       scanf("%d",&vet2[cont]);  
    }
    printf("\n");
    /*Somando as duas sequências*/   
    for(cont=numSeq-1;cont>=0;cont--){
       vetResp[cont]=aux+(vet[cont]+vet2[cont]); 
       if(vetResp[cont]>=10 && vetResp[cont]!=vetResp[0]){
          aux=0;
          vetResp[cont]-=10;
          aux+=1;
       }                                 
    }
    /* Impressao do valor Final */
    for(cont=0;cont<numSeq;cont++){
       printf("%d",vetResp[cont]);    
       }      
       printf("\n");                         
system("pause");    
}
