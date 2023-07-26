#include <stdio.h>

int main()
{
    int i;
    char nome[15][50];
    float nota1, nota2, media;


//9) Elabore um algoritmo que leia o nome, nota da avaliação 1, e nota da avaliação 2 de 15 alunos. Após
//cada leitura, imprimir o nome, nota da avaliação 1, nota da avaliação 2 e média aritmética de cada aluno

         for(i=0; i<15; i++)
         {
            printf("--------------------------------------\n");
            printf("Insira seu nome:\n");
            scanf("%50[^\n]s", nome[i]);
            fflush(stdin);

            printf("Nota da prova 1:\n");
            scanf("%f.\n", &nota1);
            fflush(stdin);

            printf("Nota da prova 2:\n");
            scanf("%f.\n", &nota2);
            fflush(stdin);

            printf("Nome do aluno:\n");
            puts(nome[i]);
            printf("Nota da prova 1: %.2f.\n", nota1);
            printf("Nota da prova 2: %.2f.\n", nota2);
            
            media = (nota1 + nota2) / 2;

            printf("Media aritmetica: %.2f.\n", media);
            printf("------------------------------------\n");
            

         }





}