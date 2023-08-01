#include <stdio.h>
int main()
{
    float Salario[20];
    char nome[20][50];
    int i;
    int pessoas = 20;


//8) Elabore um programa que leia nome e salário de 20 pessoas. Calcular e armazenar o novo salário
//sabendo-se que o reajuste foi de 8%. Ao final imprimir uma listagem numerada com nome e novo salário. 

       for( i = 0; i < pessoas; i++)
       {
        printf("Digite o seu nome:\n");
        gets(nome[i]);
        fflush(stdin);

        printf("Digite o seu salario:\n");
        scanf("%f.\n", &Salario[i]);
        fflush(stdin);
       }


       for ( i = 0; i < pessoas; i++)
       {
        Salario[i] = Salario[i] * 1.08;
        puts(nome[i]);
        printf("%.2f.\n", Salario[i]);
       }
       



}