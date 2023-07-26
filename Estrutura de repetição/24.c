#include <stdio.h>
int main()
{
    int i;
    float nota1[20];
    float nota2[20];
    float nota3[20];
    float nota4[20];
    float nota5[20];
    float media[20];
    float mediaturma = 0;
    float percentual = 0;


//24) Elabore um algoritmo que entre com 5 notas de cada aluno de uma turma de 20 alunos e calcule:
//a. A média de cada aluno;
//b. A média da turma;
//c. O percentual de alunos que tiveram médias maiores ou iguais a 5,0. 

    for( i = 0; i < 20; i++)
       {
        printf("--------Aluno: %d.\n", i);
        printf("Digite a nota 1:\n");
        scanf("%f.\n", &nota1[i]);
        fflush(stdin);

        printf("Digite a nota 2:\n");
        scanf("%f.\n", &nota2[i]);
        fflush(stdin);

        printf("Digite a nota 3:\n");
        scanf("%f.\n", &nota3[i]);
        fflush(stdin);

        printf("Digite a nota 4:\n");
        scanf("%f.\n", &nota4[i]);
        fflush(stdin);

        printf("Digite a nota 5:\n");
        scanf("%f.\n", &nota5[i]);
        fflush(stdin);

        media[i] = (nota1[i] + nota2[i] + nota3[i] + nota4[i] + nota5[i]) / 5;
        
        printf("Media do Aluno: %.2f.\n", media[i]);
        
        printf("--------------------------------------------\n");

       }

//b. A média da turma;
       for( i = 0; i < 20; i++)
       {
        mediaturma+= media[i];
       }

       mediaturma = mediaturma / 20;
       printf("Media da turma: %.2f.\n", mediaturma);

       
//c. O percentual de alunos que tiveram médias maiores ou iguais a 5,0.      
       for( i = 0; i < 20; i++)
       {
        if(media[i] >= 5)
           {
            percentual++;
           }
       }

       percentual = (percentual / 20) * 100;

       printf("Percentual de aprovados igual a: %.2f", percentual);
       printf(" %%");


}