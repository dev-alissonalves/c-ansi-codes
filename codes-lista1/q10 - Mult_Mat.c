#include <stdio.h>

int main() {
  int i1, j1, i2, j2, i, j, k, m1[100][100], m2[100][100], m3[100][100];
  /* Recebendo dados da dimensão das matrizes */  
  printf("Matriz 01\n\n");
  printf("Digite o numero de linhas: ");
  scanf("%d", &i1);
  printf("Digite o numero de colunas: ");
  scanf("%d", &j1);
  printf("\nMatriz 2\n");
  printf("\nDigite o numero de linhas: ");
  scanf("%d", &i2);
  printf("Digite o numero de colunas: ");
  scanf("%d", &j2);
  /* Condição e recebendo valores da matriz 1 */
  if (j1 == i2) {
    printf("\nValores da Matriz 1\n");
    for (i=0; i<i1; i++) {
      for(j=0; j<j1; j++) {
        printf("Digite um valor para [%d][%d].: ", (i+1), (j+1));
        scanf("%d", &m1[i][j]);
      }
    }
    /* Recebendo valores da matriz 2 */
    printf("\nValores da Matriz 2\n");
    for (i=0; i<i2; i++) {
      for (j=0; j<j2; j++) {
        printf("Digite um valor para [%d][%d].: ", (i+1), (j+1));
        scanf("%d", &m2[i][j]);
      }
    }
    /* Cálculo - Multiplicacão entre as Duas matrizes */
    for (i=0;i<i1; i++) {
      for (j=0; j<i1; j++) {
        for (k=0; k<j1; k++) {
          m3[i][j] = m3[i][j] + (m1[i][k] * m2[k][j]);
        }
      }
    }
    /* Resultado e impressão da Matriz Resultante */
    printf("\nMatriz 3\n");
    for (i=0; i<i1; i++) {
      for (j=0; j<j2; j++) {
        printf("%d ", m3[i][j]);
      }
      printf("\n");
    }
    printf("\n");
  }
  /* Se as matrizes não forem iguais em suas dimensões (LINHA)(COLUNA)*/
  else {
      printf("\nErro! Impossivel multiplicar as matrizes informadas.\n");
    }
system("pause");  
}
