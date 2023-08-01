#include <stdio.h>

       int main()

{
    int numeros[6];
    int i = 0;
    int par = 0;
    int impar = 0;

//9) Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
//a) todos os números pares;
//b) a quantidade de números pares;
//c) todos os números impares;
//d) a quantidade de números ímpares 


       
       for( i = 0; i < 6; i++)
       {
         printf("Digite um numero:\n");
         scanf("%d.\n", &numeros[i]);
         fflush(stdin);
       }

       for( i = 0; i < 6; i++)
       {
        if(numeros[i] % 2 == 0)
        {
            printf("Numero par: %d.\n", numeros[i]);
            par++;
        }

        else
        {
            printf("Numero impar: %d.\n", numeros[i]);
            impar++;
        }
       }

       printf("Total de numeros par: %d.\n", par);
       printf("Total de numeros impar: %d.\n", impar);
       
}       