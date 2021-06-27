#include<stdlib.h>
#include<stdio.h>

int main(){
    int dia, mes, ano;
    
    /* Recebendo os dados */    
    printf("Digite um valor correspondente ao ano: ");
    scanf("%d",&ano);
    /* Caso o ano seja bissexto */
    while(ano >= 1900 && ano <= 2100){ 
       if((ano/4)%2==0 && (ano/100)%2!=0){
          if(mes == 2){
             dia = dia+1;                
          }
       }
    }else{
                
    printf("Digite um valor correspondente ao dia: ");
    scanf("%d",&dia);
    
    
    
    
    
    
    printf("Digite um valor correspondente ao mes: ");
    scanf("%d",&mes);                             
    
    
    
    
    
    
    
    
    
    
system("pause");    
}    
