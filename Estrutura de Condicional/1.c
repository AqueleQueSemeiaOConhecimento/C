#include <stdio.h>

int main()
{
     int i;
     float nota[4];
     float media;


//1. Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas
//e a mensagem aprovado ou reprovado, considerando média 6.
      printf("Insira as suas notas abaixo:\n");

      for(i=0; i<4; i++)
      {
           printf("Insira uma nota:\n");
           scanf("%f.\n", &nota[i]);
           fflush(stdin);
      }

      media = (nota[0] + nota[1] + nota[2] +nota[3]) / 4;

      if(media >= 6)
      {
        printf("Aprovado.\n");
      }

      else 
      {
        printf("Reprovado.\n");
      }





}
