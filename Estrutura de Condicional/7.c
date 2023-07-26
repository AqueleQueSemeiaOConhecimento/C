#include <stdio.h>

int main()
{
    float salario;

//7. Elabore um algoritmo que leia o salário de uma pessoa e imprima o desconto do INSS, conforme tabela
//descrita a seguir:
//SALÁRIO % DO INSS
//Menor ou igual a R$ 600,00 Isento
//Maior que R$ 600,00 ou igual a R$ 1200,00 20%
//Maior que R$ 1200,00 e menor ou igual a R$ 2000,00 25%
//Maior que R$ 2000,00 30%

      printf("Insira o valor do seu salario para saber o valor do desconto:\n");
      scanf("%f.\n", &salario);

          if(salario <= 600)
          {
            printf("Isento.\n");
          }

          else if(salario <= 1200)
          {
            printf("Voce tem direito a 20%% de desconto.\n");
          }
          else if(salario <= 2000)
          {
            printf("Voce tem direito a 25%% de desconto.\n");
          }
          else 
          {
            printf("Voce tem direito a 30%% de desconto.\n");
          }





    
}