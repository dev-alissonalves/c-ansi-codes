#include <stdio.h>
int main(void)
{
   int num, valor;
   int *p;
   num = 55;

   p = &num; /* P recebe o endereco de memoria da variavel num */
   valor = *p; /* Valor é igualado a num de uma maneira indireta */
   
   printf ("O valor da variavel VALOR que recebeu o conteudo de NUM: %d\n",valor);
   printf ("Endereco para onde o ponteiro aponta (Endereco de NUM): %p\n",p);
   printf ("Valor da variavel apontada: %d\n",*p);
}

