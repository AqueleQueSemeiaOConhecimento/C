#include <stdio.h>

int main()
{
    int i, soma;

//7) Elabore um algoritmo que imprima todos os números de 100 a 105, usando uma estrutura de repetição,
//e ao final, a soma deles. 
 
      for(i = 100; i < 106; i++)
      {
      printf("%d\n", i);
      }

      soma = 100 + 101 + 102 + 103 + 104 + 105;
      printf("Soma: %d.\n", soma);

}