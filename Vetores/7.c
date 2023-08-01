#include <stdio.h>

int main()
{
    int vetor1[5], vetor2[5];
    int i;


//7) Elabore um programa que entre com 5 números inteiros em um vetor A. Construir um vetor B de mesma
//dimensão, com os mesmo elementos do vetor A, os quais devem estar invertidos, ou seja, o primeiro
//elemento do vetor A passa a ser o último elemento do vetor B, o segundo elemento do vetor A, passa a
//ser o penúltimo elemento do vetor B, e assim por diante. Ao final, imprima os elementos dos 2 vetores. 

      for ( i = 0; i < 5; i++)
      {
        printf("Digite um numero:\n");
        scanf("%d.\n", &vetor1[i]);
        fflush(stdin);
      }

      vetor2[4] = vetor1[0];
      vetor2[3] = vetor1[1];
      vetor2[2] = vetor1[2];
      vetor2[1] = vetor1[3];
      vetor2[0] = vetor1[4];

      for ( i = 0; i < 5; i++)
      {
        printf("%d.\n", vetor1[i]);
      }

      for ( i = 0; i < 5; i++)
      {
        printf("%d.\n", vetor2[i]);
      }
      
      
}