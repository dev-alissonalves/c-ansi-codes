#include<stdlib.h>
#include<stdio.h>

int main(void){
    int mat[100][100],mat1[100][100],matSoma[100][100], n, linha, coluna;
    printf("Digite qual o valor da dimensao N da matriz:");
    scanf("%d",&n);  
    printf("\n"); 
    /*Dados da primeira Matriz*/
    for(linha=0;linha<n;linha++){
       for(coluna=0;coluna<n;coluna++){
          printf("Digite o elemento %dx%d da primeira matriz :",linha+1,coluna+1);  
          scanf("%d",&mat[linha][coluna]);   
       }
    }  
    printf("\n");                        
    /*Dados da segunda Matriz*/                                                    
    for(linha=0;linha<n;linha++){
       for(coluna=0;coluna<n;coluna++){
          printf("Digite o elemento %dx%d da segunda matriz :",linha+1,coluna+1);  
          scanf("%d",&mat1[linha][coluna]);   
       }  
    }
    printf("\n");
    /*A soma das duas matrizes*/
    for(linha=0;linha<n;linha++){
       for(coluna=0;coluna<n;coluna++){
          matSoma[linha][coluna] = (mat[linha][coluna] + mat1[linha][coluna]);
       }
    }
    /* Impressão do resultado */
    printf("A soma das matrizes eh:\n");
    for(linha=0;linha<n;linha++){
       for(coluna=0;coluna<n;coluna++){    
          printf("%d ",matSoma[linha][coluna]);                                              
       }
       printf("\n");
    }                                                                       
system("pause"); 
}   
    
