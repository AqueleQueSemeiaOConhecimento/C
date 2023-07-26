#include <stdio.h>
int main()
{
    char nome[50];
    float valcompra, valvenda;

//8. Um comerciante calcula o valor de venda, tendo em vista a tabela a seguir:
//VALOR DA COMPRA VALOR DA VENDA
//Valor menor de R$ 100,00                  Lucro de 70%
//Maior que R$ 100,00 a R$ 300,00           Lucro de 50%
//Maior que R$ 300,00 a R$ 500,00           Lucro de 40%
//Maior que R$ 500,00                       Lucro de 30%
//Elabore um algoritmo que possa entrar com o nome do produto, o valor de compra e imprimir o nome
//do produto e seu valor de venda.
      printf("Insira o nome do produto:\n");
      scanf("%50[^\n]s", nome);
      fflush(stdin);
      printf("Insira o valor de compra:\n");
      scanf("%f.\n", &valcompra);

          if(valcompra < 100)
        {
            valvenda = valcompra * 1.7;
            printf("Nome do Produto:\n");
            puts(nome);
            printf("Valor de Compra: R$ %.2f.\n", valcompra);
            printf("Valor de Venda: R$ %.2f.\n", valvenda);
        }

          else if(valcompra < 300)
        {
            valvenda = valcompra * 1.5;
            printf("Nome do Produto:\n");
            puts(nome);
            printf("Valor de Compra: R$ %.2f.\n", valcompra);
            printf("Valor de Venda: R$ %.2f.\n", valvenda);
        }

          else if(valcompra < 500)
        {
            valvenda = valcompra * 1.4;
            printf("Nome do Produto:\n");
            puts(nome);
            printf("Valor de Compra: R$ %.2f.\n", valcompra);
            printf("Valor de Venda: R$ %.2f.\n", valvenda);
        }  

           else 
        {
            valvenda = valcompra * 1.3;
            printf("Nome do Produto:\n");
            puts(nome);
            printf("Valor de Compra: R$ %.2f.\n", valcompra);
            printf("Valor de Venda: R$ %.2f.\n", valvenda);
        }


}