#include <stdio.h>
int main()
{
    int i;
    int idade[9];
    float idade15 = 0;
    int idade30 = 0;
    int idade45 = 0;
    int idade60 = 0;
    float idadeplus = 0;
    float percentual1 = 0;
    float percentual2 = 0;

//26) Faça um programa que receba a idade de oito pessoas, calcule e mostre:
//a) a quantidade de pessoas em cada faixa etária;
//b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas;
//c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas.
//Faixa etária IDADE
//1 Até 15 anos
//2 De 16 a 30 anos
//3 De 31 a 45 anos
//4 De 46 a 60 anos
//5 Acima de 60 anos
        
         for(i=1; i<9; i++)
            {
                printf("Idade da pessoa: %d.\n", i);
                scanf("%d.\n", &idade[i]);
            }

//a) a quantidade de pessoas em cada faixa etária;

            for(i=1; i<9; i++)
               {
                  if(idade[i] < 15)
                  {
                  idade15++;
                  }

                  else if(idade[i] < 30)
                  {
                    idade30++;
                  }

                  else if(idade[i] < 45)
                  {
                    idade45++;
                  }

                  else if(idade[i] < 60)
                  {
                    idade60++;
                  }

                  else if(idade[i] >= 61)
                  {
                    idadeplus++;
                  }

               }
//a) a quantidade de pessoas em cada faixa etária;
printf("\t========================================\n");
printf("Pessoas com ate 15 anos: %.0f.\n", idade15);
printf("Pessoas com ate 30 anos: %d.\n", idade30);
printf("Pessoas com ate 45 anos: %d.\n", idade45);
printf("Pessoas com ate 60 anos: %d.\n", idade60);
printf("Pessoas com mais de 60 anos: %.0f.\n", idadeplus);

//b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas;

    percentual1 = (idade15 / 8) * 100;
    printf("O percentual de pessoas na primeira faixa etaria corresponde a: %.2f\n", percentual1);
    printf("%%");

//c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas.
    percentual2 = (idadeplus / 8) * 100;
    printf("O percentual de pessoas na ultima faixa etaria corresponde a: %.2f\n", percentual2);
    printf("%%");
}

