#include <stdio.h>

int main()
{

int i;
int num[5];
int par = 0;
int impar = 0;

//11) Elabore um algoritmo que leia 5 números, e imprima quantos são pares e quantos são ímpares. 

       for(i=0; i<5; i++)
       {
        printf("Digite um numero:\n");
        scanf("%d.\n", &num[i]);
       }

        for(i=0; i<5; i++)
        {
            if(num[i] % 2 ==0)
            {
                
                par++;

            }

        else 
        {
            impar++;
        }
        }

        printf("Par= %d.\n", par);
        printf("Impar= %d.\n", impar);


    
}