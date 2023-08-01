#include <stdio.h>

int main()
{
    float notas[10][5];
    char nome[10][100];
    int i, j;
    float media[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int numalu = 10;

//6) Elabore um algoritmo que armazene o nome de 1 disciplina. Nesta disciplina existe 10 alunos
//matriculados e para cada aluno existe 5 notas. Crie uma matriz que armazene o código do aluno
//e suas 5 notas. Ao final deverá imprimir uma listagem com as seguintes informações:
//NOME DA DISCIPLINA
//NOME DO ALUNO MÉDIA FINAL SITUAÇÃO(A-Aprovado, P-Prova de Recuperação, R- Reprovado)
//OBS: O aluno só será aprovado se a média final for maior ou igual a 7,0 e reprovado se a média
//final for menor ou igual a 3,0.
   
       for( i = 0; i < numalu; i++)
         {  
            printf("\t-----Aluno %d--\n", i + 1);
            printf("Nome do Aluno:\n");
            gets(nome[i]);

            for( j = 0; j < 5; j++)
               {
                printf("Nota: %d.\n", j + 1);
                scanf("%f.\n", &notas[i][j]);
                fflush(stdin);
               }
         }

         for( i = 0; i < numalu; i++)
         {
            printf("Materia de Filosofia:\n");
            printf("\t-----Aluno %d--.\n", i + 1);

            printf("\tNOME:\n");
            puts(nome[i]);

            for( j = 0; j < 5; j++)  
            {

            media[i]+= notas[i][j];         
            }

            media[i] = media[i] / 5;
            printf("Media do Aluno: %d.\n", i + 1);
            printf("%.2f.\n", media[i]);
                       
         }
         for( i = 0; i < numalu; i++)
            {  
               printf(" Aluno %d.\n", i + 1);
                if(media[i] >= 7)
                 {
                 printf("\nAprovado.\n");
                 }
               
                 
                 else if(media[i] <= 3)
                 {
                 printf("\nReprovado.\n");
                 }

                 else 
                 {
                 printf("\nRecuperacao.\n");
                 }
            }
}