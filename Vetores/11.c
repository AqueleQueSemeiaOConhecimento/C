#include <stdio.h>
#include <string.h>

int main()

{
    char nome[7][50];
    float nota[7];
    float notaPassar[7] = {0, 0, 0, 0, 0, 0, 0};
    int i;
    float maiormedia;



//11) Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a
//média final destes alunos. Calcule e mostre:
//a) A maior média (desconsiderar empates)
//b) Para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa tirar
//na prova de exame final para ser aprovado.considerar que a média para aprovação no exame é 5.
          
           for( i = 0; i < 7; i++)
           {
            printf("Insira o nome do aluno %d.\n", i + 1);
            gets(nome[i]);
            fflush(stdin);
            printf("Media do aluno %d.\n", i + 1);
            scanf("%f.\n", &nota[i]);
            fflush(stdin);
           }

           maiormedia = 0;

           for( i = 0; i < 7; i++)
           {
              if(nota[i] > maiormedia) {maiormedia = nota[i];}
           }

            printf("Maior media:\n");
            printf("%.2f.\n", maiormedia);
           


           printf("--------------------------------\n");

           for( i = 0; i < 7; i++)
           {
            if(nota[i] < 7)
            {
                notaPassar[i] = 7 - nota[i];
                notaPassar[i] = notaPassar[i] + 5;
                printf("Aluno:\n");
                puts(nome[i]);
                printf("Precisa tirar %.2f.\n", notaPassar[i]);
                
                printf("--------------------------------\n");
            }
           }







}