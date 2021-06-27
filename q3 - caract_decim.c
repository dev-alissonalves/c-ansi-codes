#include<stdlib.h>
#include<stdio.h>

int main(void){
    char c;
    printf("Digite os caracteres: \n");
    while(1){
       scanf("%c",&c);
       if(c==27)
          break;
       if(c != '\n')   
          printf("%d\t",c);
    }                  
system("pause");
}
