#include <stdio.h>

int main()
{
    int i;
    int num;
    float fatorial = 0;

//15) Elabore um algoritmo que leia um número e imprima o fatorial desse número. Suponha que o número
//lido será maior ou igual a zero.

printf("Digite um numero impar:\n");
scanf("%d.\n", &num);
fflush(stdin);
   
  for(i=0; i<=num; i++)
  {
      if(i % 2 != 0)
      fatorial+= i;

      else
      {

      }
  }
  printf("Produto dos numeros impar: %.2f.\n", fatorial);

}
  