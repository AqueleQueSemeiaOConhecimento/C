#include <stdio.h>
#include <string.h>

int main()
{   int numVende = 5;
    float maiorValor = 0;
    float menorValor = 999999;
    char nomes[10][50];
    char nomeMaior[50];
    char nomeMenor[50];
    float vendas[10];
    int i;
    float comissao;
    float totalVendas = 0;



//13) Faça um programa que receba o total das vendas de cada vendedor de uma loja armazene-as em um
//vetor. Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em um
//outro vetor. Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas
//dez vendedores na loja. Calcule e mostre:
//a) um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
//b) o total das vendas de todos os vendedores;
//c) o maior valor a receber e o nome de que o receberá;
//d) o menor valor a receber e o nome de quem o receberá     
   
    for( i = 0; i < numVende; i++)
    {
        printf("Nome do Vendedor:\n");
        gets(nomes[i]);
        fflush(stdin);

        printf("Total de vendas:\n");
        scanf("%f.\n", &vendas[i]);
        fflush(stdin);           
    }

    printf("\t ------------------------\n");

    for ( i = 0; i < numVende; i++)
    {   
        comissao = 0;

        printf("Nome do vendedor(a):\n");
        puts(nomes[i]);
        printf("Total de vendas:\n");
        printf("%.2f.\n", vendas[i]);
        printf("Comissao: 15%%.\n");

        comissao = vendas[i] * 0.15;

        printf("%.2f.\n", comissao);
    }

    for ( i = 0; i < numVende; i++)
    {
       totalVendas+= vendas[i];
    }

    printf("Total de vendas: %.2f.\n", totalVendas);

    printf("\t ------------------------\n");

    for ( i = 0; i < numVende; i++)
    {
       if( vendas[i] > maiorValor) 
       {
        maiorValor = vendas[i];
        strcpy(nomeMaior, nomes[i]);
       }
    }

    printf("Vendedor que vendeu mais:\n");
    puts(nomeMaior);
    printf("Vendas: %.2f.\n", maiorValor);

    printf("\t ------------------------\n");   

    for ( i = 0; i < numVende; i++)
    {
       if( vendas[i] < menorValor) 
       {
        menorValor = vendas[i];
        strcpy(nomeMenor, nomes[i]);
       }
    }

    printf("Vendedor que vendeu menos:\n");
    puts(nomeMenor);
    printf("Vendas: %.2f.\n", menorValor);



}