#include <stdio.h>

   int main()
{
    char nomeProduto[10][50];
    int codigoProduto[10];
    float precoProduto[10];
    int i;
    int numProduto = 10;

//1) Faça um programa que preencha três vetores com dez posições cada um: o primeiro vetor, com os nomes de dez
//produtos; o segundo vetor, com os códigos dos dez produtos; e o terceiro vetor, com os preços dos produtos. Mostre
//um relatório apenas com o nome, o código, o preço e o novo preço dos produtos que sofrerão aumento.
//Sabe-se que os produtos que sofrerão aumento são aqueles que possuem código par ou preço superior a
//R$1.000,00. Sabe-se ainda que, para os produtos que satisfazem as duas condições anteriores, código e preço, o
//aumento será de 20%; para aqueles que satisfazem apenas a condição de código, o aumento será de 15%; e para
//aqueles que satisfazem apenas a condição de preço, o aumento será de 10%. 
 
       for( i = 0; i < numProduto; i++)
       {
        printf("Insira o nome do Produto:\n");
        gets(nomeProduto[i]);
        fflush(stdin);

        printf("Insira o codigo do produto:\n");
        scanf("%d.\n", &codigoProduto[i]);
        fflush(stdin);

        printf("Preco do produto:\n");
        scanf("%f.\n", &precoProduto[i]);
        fflush(stdin);

        printf("\t----------------------------\n");

       }

       for( i = 0; i < numProduto; i++)
       {
        if((codigoProduto[i] % 2 == 0) && (precoProduto[i] > 1000))
        {
            precoProduto[i] = precoProduto[i] * 1.2;
            printf("Produto de codigo:\n");
            printf("%d.\n", codigoProduto[i]);
            printf("Novo preco:\n");
            printf("%.2f.\n", precoProduto[i]);
        }

        else if(codigoProduto[i % 2 ==0])
        {
            precoProduto[i] = precoProduto[i] * 1.15;
            printf("Produto de codigo:\n");
            printf("%d.\n", codigoProduto[i]);
            printf("Novo preco:\n");
            printf("%.2f.\n", precoProduto[i]);
        }

        else if(precoProduto[i] > 1000)
        {
            precoProduto[i] = precoProduto[i] * 1.1;
            printf("Produto de codigo:\n");
            printf("%d.\n", codigoProduto[i]);
            printf("Novo preco:\n");
            printf("%.2f.\n", precoProduto[i]);
        }

        else
        {
            printf("Codigo dos produtos que continuam com o mesmo preço:\n");
            printf("%d.\n", codigoProduto[i]);           
        }
          
       }

}