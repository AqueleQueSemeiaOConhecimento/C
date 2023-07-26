#include <stdio.h>

int main()
{

    int i;
    char nome[50];
    float salario;

//18) Elabore um algoritmo que leia o nome e salário bruto de 10 pessoas. Para cada pessoa, imprimir o
//nome e o valor da alíquota de IR, conforme tabela abaixo:
//Salário                                        Alíquota
//Salário < R$ 990,00                            Isento
//R$ 990,00 <= salário < R$ 2500,00              10% do salário bruto
//Salário>= R$ 2500,00                           15% do salário bruto

       for(i=0; i<10; i++)
       {
        printf("Digite o seu nome:\n");
        scanf("%50[^\n]s", nome);
        fflush(stdin);

        printf("Insira o valor do seu salario:\n");
        scanf("%f.\n", &salario);
        fflush(stdin);

        printf("Nome: ");
        puts(nome);

        if(salario < 990)
        {
            printf("\n Aliquota Isenta\n");
        }
        
        else if(salario <  2500)
        {
            salario = salario * 0.1;
            printf(" Aliquota = %.2f.\n", salario);
        }

        else
        {
            salario = salario * 0.15;
            printf(" Aliquota = %.2f.\n", salario);
        }

       }





}