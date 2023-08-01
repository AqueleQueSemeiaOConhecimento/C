#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, { 7, 8, 9}};
    int i, j;
    int matriz2[1][1];

//2) Faça um programa que preencha uma matriz M 3x3, imprima qual é o maior elemento da matriz.

      for( i = 0; i < 3; i++)
      {
        for( j = 0; j < 3; j++)
        {
            printf("%d.\n", matriz[i][j]);
        }
      }

       matriz2[0][0] = matriz[0][0];
       
     
     for( i = 0; i < 3; i++)
     {
        for( j = 0; j < 3; j++)
        {
            if(matriz[i][j] > matriz2[0][0]) {matriz2[0][0] = matriz[i][j];}
        }
     }

     printf("Maior numero da Matriz:\n");
     printf("%d.\n", matriz2[0][0]);
      



}