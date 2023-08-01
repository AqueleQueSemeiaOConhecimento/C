#include <stdio.h>

    int main()
{
    float armazem[5][3];
    int i, j;
    int arm[4] = {0, 0, 0, 0};
    float custoarm[4] = {0, 0, 0, 0};


//7) Faça um programa que receba o estoque atual de três produtos, armazenados em quatro
//armazéns e coloque esses dados em uma matriz 5 x 3. Considerando que a última linha dessa
//matriz contenha o custo de cada produto, o programa deverá calcular e mostrar:
//a) a quantidade de itens armazenados em cada armazém;
//b) qual o custo total de cada produto;
//c) qual o custo total de cada armazém

      for( i = 0; i < 4; i++)
      {
            printf("Quantos items deseja colocar no armazem %d.\n", i + 1);
            scanf("%f.\n", &armazem[i][0]);
            fflush(stdin);
      }

      for( j = 0; j < 3; j++)
      {
        printf("Qual o custo unitario do produto %d.\n", j + 1);
        scanf("%f.\n", &armazem[4][j]);
        fflush(stdin);
      }

      printf("---------------------------------\n");

      for(i = 0; i < 4; i++)
      {
        
         arm[i]+= armazem[i][0];
           
        printf("No Armazem %d", i + 1);
        printf(" tem %d items.\n", arm[i]);
      }

      printf("-----------------------------------\n");    
//c) qual o custo total de cada armazém

       for(i = 0; i < 3; i++)
      { 
        
        for( j = 0; j < 3; j++)
        {
            custoarm[i] = arm[i] * armazem[4][i];         
        }
        printf("Custo do Armazem %d:.\n", i + 1);
        printf("%.2f.\n", custoarm[i]);
      }  

      custoarm[3] = arm[3] * armazem[4][2];
      printf("Custo do Armazem 4:\n");
      printf("%.2f.\n", custoarm[3]);    

}