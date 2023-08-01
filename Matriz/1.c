#include <stdio.h>

int main()
{
    int matriz[3][3];
    int l, c;
    int numero;

//1) Escreva uma algoritmo que leia nove números inteiros para preencher uma matriz de dimensão
//3x3 , ou seja, com 3 linhas e 3 colunas. Considere que não podem ser informados valores
//duplicados. O algoritmo também deve ler um número inteiro e escrever uma mensagem indicando
//se o valor de existe ou não na matriz .

printf("Digite 9 numeros:\n");

    for( l = 0; l < 3; l++)
       {

          for( c = 0; c < 3; c++)

            {
                scanf("%d", &matriz[l][c]);
            }

       }

       printf("Agora digite um numero para vermos se ele esta presente na matriz:\n");
       scanf("%d.\n", &numero);

       for( l = 0; l < 3; l++)
       {
          
          for( c = 0; c < 3; c++)
          {

            if(numero == matriz[l][c])
            {
                printf("Esta presente na matriz.");
            }
            
            else
            {

            }

          }

       }




}