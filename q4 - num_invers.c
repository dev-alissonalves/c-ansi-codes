#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a,n;
	printf("Digite um numero inteiro de ate 4 digitos: ");
	scanf("%d",&a);
	if(a>=0){
		do{
			n = a % 10;
			printf("%d",n);
			a /= 10;
		}while (a != 0);
		printf("\n");
	}
    /*caso o numero seja negativo! */
	else if(a<1){
		a = a * -1;
		printf("-");
		do{
			n = a % 10;
			printf("%d",n);
			a /= 10;
		}while (a != 0);
	}
return 0;
}    
    
