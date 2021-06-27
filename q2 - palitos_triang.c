/*Ler as dimensões de 3 palitos e imprimir se é possível formar um triângulo
com os palitos.*/

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main(void){
    float dm1,dm2,dm3;
    printf("Digite 3 dimensoes de um palito!\n");
    printf("Digite a primeira dimensao: ");
    scanf("%f",&dm1);
    printf("Digite a segunda dimensao: ");
    scanf("%f",&dm2);
    printf("Digite a terceira dimensao: ");
    scanf("%f",&dm3);
    if((dm1+dm2)>dm3 && (dm1+dm3)>dm2 && (dm2+dm3)>dm1){
       printf("\nForma um triangulo!\n\n");
    }else
       printf("\nNao forma um triangulo!\n\n");   
system("pause");       
}       
