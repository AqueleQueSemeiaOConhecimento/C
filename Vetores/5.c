#include <stdio.h>
 
     int main()

{
           int vetorA[5];
           int i;
//5) Dado um vetor A de 5 elementos, elabore um programa que ordene esse vetor, e, ao final, imprima esse
//vetor ordenado.

         for( i = 0; i < 5; i++)
         {
            printf("Digite um numero: %d.\n", i + 1);
            scanf("%d.\n", &vetorA[i]);
         }

         printf("\t-----------------------------\n");

         for ( i = 0; i < 5; i++)
         {
            printf("%d.\n", vetorA[i]);
         }
         

}