#include <stdio.h>

int main()
{

int num = 0;
int i;
int produto = 0;

     printf("Digite um numero:\n");
     scanf("%d.\n", &num);
     printf("-----------------------\n");
     
     for(i=1; i<= num; i++)
     {
        printf("%d.\n", i);
     }


     for(i=1; i<=num; i++)
     {
        produto += i; 

     }

     printf("Produto = %d.\n", produto);



//14) Elabore um algoritmo que leia um número e imprima todos os números de 1 até o número lido, e
//também o seu produto.
//Exemplo:
//Número: 3 Saída: 1 2 3 Produto: 6 


}