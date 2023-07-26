#include <stdio.h>

int main()
{
    int i;
    int num[5];
    float par = 0;
    float percentual = 0;
    
//12) Elabore um algoritmo que leia 5 números, e imprima o percentual de números pares informados

     for(i = 0; i < 5; i++)
     {
        printf("Digite um numero:\n");
        scanf("%d.\n", &num[i]);
     }


     for(i=0; i<5; i++)
     {
        if(num[i] % 2 == 0)
        {
            par++;
        }
     }

     percentual = par / 5;
     percentual = percentual * 100;
     printf("Os numeros pares sao: %.2f", percentual);
     printf(" %%");





}