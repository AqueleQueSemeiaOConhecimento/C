#include <stdio.h>
      
       int main()
{
    int numeros[10];
    int i;
    int maior = 0;
    int menor = 0;
    int diferenca = 0;

//3) Elabore um programa que leia um vetor X com 10 números e calcule e imprima a diferença entre o
//maior e o menor elemento existente no vetor.
      
       for( i = 0; i < 10; i++)
       {
        printf("Digite um numero:\n");
        scanf("%d.\n", &numeros[i]);
        fflush(stdin);
       }
       maior = numeros[0];
       menor = numeros[0];

       for ( i = 0; i < 10; i++)
       {
         if(numeros[i] >= maior)
         {
            maior = numeros[i];
         }

         else if(numeros[i] <= menor)
         {
            menor = numeros[i];
         }
         else
         {

         }
       }

       diferenca = maior - menor;
       printf("\nDiferenca = %d.\n", diferenca);
       


}