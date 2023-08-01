#include <stdio.h>

int main()

{

    int alunos  = 6;
    float notas1[6];
    float notas2[6];
    int i;
    float mediaClass = 0;
    float mediaFinal[6];
    float reprovados = 0;
    float aprovados = 0; 
    float exame = 0;

//2) Faça um programa que receba o nome e duas notas de seis alunos e mostre o relatório a seguir. Relatório de
//notas:
//a) Média das notas da classe:
//b) Percentual de alunos reprovados: (os alunos reprovados são aqueles que a média foi menor que 3)
//c) Percentual de alunos de exame. (Aluno em exame , média entre 3,0 e 6,9)
//d) Percentual de alunos aprovados. (média maior ou igual a 7,0)

     for( i = 0; i < alunos; i++)
     {
        printf("---Aluno %d.\n", i + 1);

        printf("Insira a primeira nota:\n");
        scanf("%f.\n", &notas1[i]);
        fflush(stdin);

        printf("Insira a segunda nota:\n");
        scanf("%f.\n", &notas2[i]);
        fflush(stdin);
        
     }

     printf("\t--------------------------------\n");

     for( i = 0; i < alunos; i++)
     {
        mediaClass+= notas1[i] + notas2[i];
     }

     mediaClass = mediaClass / (2 * alunos);
     printf("Media da classe: %.2f.\n", mediaClass);

     for( i = 0; i < alunos; i++)
     {
        mediaFinal[i] = (notas1[i] + notas2[i]) / 2;
     }

     for( i = 0; i < alunos; i++)
     {
        if(mediaFinal[i] <= 3)
        {
            reprovados++;
        }

        else if(mediaFinal[i] <= 6.9)
        {
            exame++;
        }

        else
        {
            aprovados++;
        }

     }

     aprovados = aprovados / alunos;
     aprovados = aprovados * 100;
     printf("Aprovados: %.2f %%.\n", aprovados);

     exame = exame / alunos;
     exame = exame * 100;
     printf("Exame: %.2f %%.\n", exame);

     reprovados = reprovados / alunos;
     reprovados = reprovados * 100;
     printf("Reprovados: %.2f %%.\n", reprovados);



}