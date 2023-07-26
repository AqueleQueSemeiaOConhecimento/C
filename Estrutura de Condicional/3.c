#include <stdio.h>

int main()
{
    float valor, preco;

//3. Faça um algoritmo que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a
//seguir, o novo preço e a classificação.
//TABELA 1 PERCENTUAL DE AUMENTO
//Preço                                        %
//Até R$ 50,00 (inclusive)                     5
//Entre R$ 50,00 e R$ 100,00 (inclusive)       10
//Acima de R$ 100,00                           15




//TABELA 2 CLASSIFICAÇÃO
//NOVO PREÇO CLASSIFICAÇÃO
//Até R$ 80,00 (inclusive) Barato
//Entre R$ 80,00 e R$ 120,00 Normal
//Entre R$ 120,00 e R$ 200,00 Caro
//Maior que R$ 200,00 Muito Caro

        printf("Insira o valor e veja o novo preco:\n");
        scanf("%f.\n", &valor);
        fflush(stdin);

            if(valor <= 50)
            {
                preco = valor * 1.05;
                printf("Preco: R$ %.2f.\n", preco);
            }
            else if(valor <= 100)
            {
                preco = valor * 1.1;
                printf("Preco: R$ %.2f.\n", preco);
            }
            else 
            {
                preco = valor * 1.15;
                printf("Preco: R$ %.2f.\n", preco);
            }

            if(preco <= 80)
            {
                printf("Classificacao: Barato");
            }
            else if(preco <= 120)
            {
                printf("Classificacao: Normal");
            }
            else if(preco <= 200)
            {
                printf("Classificacao: Caro");
            }
            else
            {
                printf("Classificacao: Muito caro");
            }


}