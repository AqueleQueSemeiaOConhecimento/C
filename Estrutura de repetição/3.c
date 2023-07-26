#include <stdio.h>
int main()
{
    float num[50];
    int i, numt;
    float calculo;

//3) Elabore um algoritmo que leia um número de entrada n que indicará a quantidade de números a serem
//lidos. Em seguida, leia n números (conforme o valor informado anteriormente) e imprima o triplo de cada
//um. 

     printf("Digite quantos numeros deseja multiplicar por 3.\n");
     scanf("%d.\n", &numt);
     fflush(stdin);
     printf("Ok... agora insira os numeros:\n");
        
        for(i=0; i<numt; i++)
          {
            printf("Digite um numero.\n");
            scanf("%f.\n", &num[i]);
            fflush(stdin);
          }

         for(i=0; i<numt; i++)
          { 
            calculo = num[i] * 3;
            printf("%.2f.\n", calculo);
          }  


        
        

        



}

