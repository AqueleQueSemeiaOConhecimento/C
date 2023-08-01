#include <stdio.h>

int main()
{
    int matriz[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int i, j;
    int aux[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int aux2[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};

//3) Elabore um algoritmo que leia e armazene os elementos de uma matriz de número inteiro M
//5x5 e a seguir troque:
//a. A segunda linha pela quarta linha;
//b. A quarta coluna pela primeira coluna;
//Ao final, imprima a nova matriz. 

   for( i = 0; i < 5; i++)
      {
          for( j = 0; j < 5; j++)
          {
            printf("\t%d ", matriz[i][j]);
          }

        printf("\n");

      }

//a. A segunda linha pela quarta linha;
      for( i = 0; i < 5; i++)
      {
         matriz[1][i] = aux[1][i];
      }


      for( i = 0; i < 5; i++)
      {
         matriz[3][i] = aux2[3][i];
      }



      for( i = 0; i < 5; i++)
      {
         matriz[3][i] = aux2[1][i];
      }


      for( i = 0; i < 5; i++)
      {
         matriz[1][i] = aux[3][i];
      }


//b. A quarta coluna pela primeira coluna;
       for( i = 0; i < 5; i++)
       {
          matriz[i][3] = aux[i][3];
       }


       for( i = 0; i < 5; i++)
       {
          matriz[i][0] = aux[i][0];
       }




       for( i = 0; i < 5; i++)
       {
          matriz[i][3] = aux[i][0];
       }

       for( i = 0; i < 5; i++)
       {
          matriz[i][0] = aux[i][3];
       }



printf("-------------------------------------------\n");

     for( i = 0; i < 5; i++)
      {
          for( j = 0; j < 5; j++)
          {
            printf("\t%d ", matriz[i][j]);
          }

        printf("\n");

      }


     

}      