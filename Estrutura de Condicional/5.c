#include <stdio.h>

int main()
{
    int codigo, num; 
    float preco, novopreco, desconto;

//5. Faça um algoritmo que receba:
//− O código do produto comprado; e
//- A quantidade comprada do produto.
//Calcule e mostre:
//• O preço unitário do produto comprado, seguindo a Tabela I;
//• O preço total da nota;
//• O valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
//• O preço final da nota depois do desconto.
//TABELA 1
//CÓDIGO PREÇO
//1 a 10 R$ 10,00
//11 a 20 R$ 15,00
//21 a 30 R$ 20,00
//31 a 40 R$ 30,00
//TABELA 2
//PREÇO TOTAL DA NOTA % DE
//Até R$ 250,00 (incluído) 5%
//Entre R$ 250,00 e R$ 500,00 10%
//Acima de R$ 500,00 15%
 
     printf("Insira o codigo do produto comprado:\n");
     scanf("%d.\n", &codigo);
     printf("Insira o numero total de unidades do produto:");
     scanf("%d.\n", &num);


     if(codigo > 1 and codigo < 10)
     {
         preco = num * 10;
         printf("Preco unitario do produto: R$ 10,00\n");
         printf("Quantidade comprada do produto: %d.\n", num);
         printf("Preco total da nota: R$ %.2f.\n", preco);

         if(preco < 250)
         {
            novopreco = preco * 0.95;
            desconto = novopreco - preco;

            printf("Desconto de: %.2f.\n", desconto);
            printf("Preco final: %.2f.\n", novopreco);
         }

         else if(preco < 500)
         {
            novopreco = preco * 0.90;
            desconto = novopreco - preco;

            printf("Desconto de: %.2f.\n", desconto);
            printf("Preco final: %.2f.\n", novopreco);
         }

         else if(preco > 500)
         {
            novopreco = preco * 0.85;
            desconto = novopreco - preco;

            printf("Desconto de: %.2f.\n", desconto);
            printf("Preco final: %.2f.\n", novopreco);
         }
     }


     if(codigo > 11 and codigo < 20)
     {
         preco = num * 15;
         printf("Preco unitario do produto: R$ 15,00\n");
         printf("Quantidade comprada do produto: %d.\n", num);
         printf("Preco total da nota: R$ %.2f.\n", preco);

         if(preco < 250)
         {
            novopreco = preco * 0.95;
            desconto = novopreco - preco;

            printf("Desconto de: %.2f.\n", desconto);
            printf("Preco final: %.2f.\n", novopreco);
         }

         else if(preco < 500)
         {
            novopreco = preco * 0.90;
            desconto = novopreco - preco;

            printf("Desconto de: %.2f.\n", desconto);
            printf("Preco final: %.2f.\n", novopreco);
         }

         else if(preco > 500)
         {
            novopreco = preco * 0.85;
            desconto = novopreco - preco;

            printf("Desconto de: %.2f.\n", desconto);
            printf("Preco final: %.2f.\n", novopreco);
         }
     }

     if(codigo > 21 and codigo < 30)
     {
         preco = num * 20;
         printf("Preco unitario do produto: R$ 20,00\n");
         printf("Quantidade comprada do produto: %d.\n", num);
         printf("Preco total da nota: R$ %.2f.\n", preco);

         if(preco < 250)
         {
            novopreco = preco * 0.95;
            desconto = novopreco - preco;

            printf("Desconto de: %.2f.\n", desconto);
            printf("Preco final: %.2f.\n", novopreco);
         }

         else if(preco < 500)
         {
            novopreco = preco * 0.90;
            desconto = novopreco - preco;

            printf("Desconto de: %.2f.\n", desconto);
            printf("Preco final: %.2f.\n", novopreco);
         }

         else if(preco > 500)
         {
            novopreco = preco * 0.85;
            desconto = novopreco - preco;

            printf("Desconto de: %.2f.\n", desconto);
            printf("Preco final: %.2f.\n", novopreco);
         }
     }


     if(codigo > 31 and codigo < 40)
     {
         preco = num * 30;
         printf("Preco unitario do produto: R$ 30,00\n");
         printf("Quantidade comprada do produto: %d.\n", num);
         printf("Preco total da nota: R$ %.2f.\n", preco);

         if(preco < 250)
         {
            novopreco = preco * 0.95;
            desconto = novopreco - preco;

            printf("Desconto de: %.2f.\n", desconto);
            printf("Preco final: %.2f.\n", novopreco);
         }

         else if(preco < 500)
         {
            novopreco = preco * 0.90;
            desconto = novopreco - preco;

            printf("Desconto de: %.2f.\n", desconto);
            printf("Preco final: %.2f.\n", novopreco);
         }

         else if(preco > 500)
         {
            novopreco = preco * 0.85;
            desconto = novopreco - preco;

            printf("Desconto de: %.2f.\n", desconto);
            printf("Preco final: %.2f.\n", novopreco);
         }
     }





}