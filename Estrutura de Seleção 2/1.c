#include <stdio.h>

int main()
{
 
  int num[2];
  int i;

     //1. Faça um algoritmo que leia dois números e mostre qual o maior dos dois. 
     printf("Esse algoritmo pega dois numeros e diz qual o maior:\n");
     
          for(i = 0; i < 2; i++)
{
           printf("Digite um numero:\n");
           scanf("%d.\n", &num[i]);
           fflush(stdin);
}     

         if(num[0] > num[1])
{
         printf("%d.\n", num[0]);
}   
         else 
{
         printf("%d.\n", num[1]);
}        

}