#include <stdio.h>

      int main()

{
    float num[5];
    int i;
    int auxM = 0;
    float med = 0;

    
//1) Elabore um programa que leia 5 valores do tipo inteiro em um vetor A. Ao final, imprima todos os
//elementos, o maior, o menor, e a média dos valores informados. 
    
       for( i = 0; i < 5; i++)
       {
        printf("Digite um numero:\n");
        scanf("%f.\n", &num[i]);
       }


       for ( i = 0; i < 5; i++)
       {
        printf("\t %.0f\n", num[i]);
       }


       for ( i = 0; i < 5; i++)
       {
         if(num[i] > auxM)
         {
            auxM = num[i];
         }
       }
       printf("Maior numero: %d.\n", auxM);


       for ( i = 0; i < 5; i++)
       {
         if(num[i] < auxM)
         {
            auxM = num[i];
         }
       }
       printf("Menor numero: %d.\n", auxM);


       for ( i = 0; i < 5; i++)
       {
        med+= num[i];
       }
       med = med / 5;

       printf("Valor medio dos numero igual a: %.2f.\n", med);




}     
