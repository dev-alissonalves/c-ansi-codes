#include <stdlib.h>
#include <stdio.h>

int main(){
    float matriz[100][100],determinante;
    int linha, coluna, dimensao;
    /* Recebendo o valor da dimensao */
    printf("Digite a dimensao da matriz: ");
    scanf("%d",&dimensao);
    /* Percorrendo e preenchendo a matriz com os seus elementos */
    for(linha=0;linha<dimensao;linha++){
		for(coluna=0;coluna<dimensao;coluna++){
			printf("Digite o elemento na posicao %dx%d da matriz: ",linha+1,coluna+1);
			scanf("%f",&matriz[linha][coluna]);
        }
    printf("\n");    
    }
    /* Imprimindo a matriz criada */
    printf("A matriz gerada eh:\n");
    for(linha=0;linha<dimensao;linha++){
       for(coluna=0;coluna<dimensao;coluna++){
          printf("%.1f\t",matriz[linha][coluna]);
       }
    printf("\n");     
    }
    /* Ordens da matriz e condições*/
    if(dimensao == 1){
       determinante = matriz[0][0];
       printf("O determinante eh dado por: %.1f\n",determinante);
    }                                            
    printf("\n");
    if(dimensao == 2){
       determinante = (matriz[0][0] * matriz[1][1])-(matriz[0][1] * matriz[1][0]);
       printf(" determinante eh dado por: %.1f\n",determinante);    
    }
    printf("\n");
    if(dimensao == 3){
    determinante = (matriz[0][0]*matriz[1][1]*matriz[2][2]) + (matriz[0][1]*matriz[1][2]*matriz[2][0]) + (matriz[0][2]*matriz[1][0]*matriz[2][1])
    -((matriz[0][1]*matriz[1][0]*matriz[2][2]) + (matriz[0][0]*matriz[1][2]*matriz[2][1]) + (matriz[0][2]*matriz[1][1]*matriz[2][0]));
    }            
system("pause");
}    
