#include <stdio.h>


int main ()
{
    int i, j, operacao;
//22) Elabore um algoritmo que imprima a tabuada de 1 a 10. 
 
   printf("\t ----------------Tabuada de 1 a 10.---------------\n");

   for(i = 1; i < 11; i++)
    {
        printf("--------------------------\n");
        for(j = 1; j < 11; j++)
        {
            
            operacao = i * j;
            printf("%d x %d = %d\n", i, j, operacao);
           
            
        }
    }

}