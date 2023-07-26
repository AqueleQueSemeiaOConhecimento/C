#include <stdio.h>

int main()
{
    int num;

    //4. Faça um algoritmo que leia um nº inteiro e mostre uma mensagem indicando se este número é par ou
    //ímpar, e se é positivo ou negativo.

             printf("Insira um numero:\n");
             scanf("%d.\n", &num);
              
        if((num % 2 ==0))
        {
            printf("Par\n");
        }

        else
        { 
            printf("Impar\n");
        }

        if(num >= 0)
        {
            printf("Positivo\n");
        }

        else
        {
            printf("Negativo\n");
        }
}