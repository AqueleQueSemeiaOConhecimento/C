#include <stdio.h>

int main()

{

  char nomes[5][50];
  float precos[5];
  int i;
  int produto50 = 0;
  float precos100 = 0;
  int precos100PLUS = 0;
//4) Faça um programa que receba o nome de cinco produtos e seus respectivos preços. Calcule e mostre:
//· A quantidade de produtos com preço inferior a R$50,00;
//· O nome dos produtos com preço entre R$50,00 e R$100,00;
//· A média dos preços dos produtos com preço superior a R$100,00

      for( i = 0; i < 5; i++)
      {
        printf("Insira o nome do Produto %d.\n", i + 1);
        gets(nomes[i]);
        fflush(stdin);

        printf("Insira o preco do Produto %d.\n", i + 1);
        scanf("%f.\n", &precos[i]);
        fflush(stdin);
      }

      for( i = 0; i < 5; i++)
      {
        if(precos[i] < 50)
        {
            produto50++;
        }

        else if(precos[i] < 100 && precos[i] > 50)
        {
            printf("Nome dos Produtos que estao na faixa:\n");
            puts(nomes[i]);
        }

        else if(precos[i] > 100)
        {
            precos100+= precos[i];
            precos100PLUS++;
        }
      }

      printf("Tem %d produtos abaixo de 50 reais.\n", produto50);

      precos100 = precos100 / precos100PLUS;

      printf("A media do Preco dos produtos com preco superior a 100:\n");
      printf("%.2f.\n", precos100);

}