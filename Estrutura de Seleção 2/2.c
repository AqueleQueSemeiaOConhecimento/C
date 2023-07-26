#include <stdio.h>

int main()
{

    int num[2];
    int i;

//2. Faça um algoritmo que leia dois números e indique se são iguais ou, se diferentes, mostre o maior e o
//menor (nesta sequência). 
           printf("Esse algoritmo le dois numeros e indica se sao iguais ou diferentes\n");
           printf("do maior para o menor:\n");

           
             
               for(i=0; i<2; i++)
               {

               printf("Digite um numero:\n");
               scanf("%d.\n", &num[i]);
               fflush(stdin);
               }

        if(num[0] == num[1]) 
        {
            printf("Os numeros sao iguais:\n");
            printf("%d.\n", num[0]);
            printf("%d.\n", num[1]);
            
        }   



        else if(num[0] > num[1]) 
        {
            printf("Maior: %d.\n", num[0]);
            printf("Menor: %d.\n", num[1]);
        } 

        else 
        {
            printf("Maior: %d.\n", num[1]);
            printf("Menor: %d.\n", num[0]);
        }        
        


}