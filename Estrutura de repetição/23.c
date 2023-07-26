#include <stdio.h>

int main()
{
    int i;
    float nota1[6];
    float nota2[6];
    float media[6];
    int aprovados = 0;
    int exame = 0;
    int reprovados = 0;
    float mediaturma = 0;
    

//23) Elabore um algoritmo que leia duas notas de 6 alunos, calcule e mostre:


//Média aritmética         Mensagem
//Até 3,0                  Reprovado
//Entre 3,0 e 7,0          Exame
//Acima ou igual de 7,0    Aprovado

//a. A média aritmética das duas notas de cada aluno;
//b. A mensagem, conforme tabela a seguir:
//c. O total de alunos aprovados;
//d. O total de alunos de exame;
//e. O total de alunos reprovados;
//f. A média da classe. 
    
      for( i = 0; i < 6; i++)
         {
            printf("ALUNO: %.d.\n", i);

            printf("Nota 1:");

            scanf("%f.\n", &nota1[i]);
            fflush(stdin);

            printf("Nota 2:");
            scanf("%f.\n", &nota2[i]);
            fflush(stdin);

            media[i] = (nota1[i] + nota2[i]) / 2;
            printf("Media: %.2f.\n", media[i]);
         }

         printf("----------------------------\n");

         
           for(i = 0; i < 6; i++)
              {
                if(media[i] > 7)
                   {
                    aprovados++;
                   }
              }

              printf("Aprovados: %.d.\n", aprovados);

         printf("------------------------------\n");

            for(i = 0; i < 6; i++)
              {
                if(media[i] < 3)
                   {
                    reprovados++;
                   }
              }

              printf("Exame: %.d.\n", reprovados);     

         printf("------------------------------\n");

            for(i = 0; i < 6; i++)
              {
                if(media[i] < 7)
                   {
                    exame++;
                   }
              }

              printf("Exame: %.d.\n", exame);     

         printf("------------------------------\n");

         mediaturma = (media[0] + media[1] + media[2] + media[3] + media[4] + media[5]) / 6;

         printf("Media da Turma: %.2f.\n", mediaturma);

                  
     




         
              
    
}