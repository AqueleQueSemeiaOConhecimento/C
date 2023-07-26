#include <stdio.h>

int main()
{
      int idade;
      float peso;

//4. Faça um algoritmo que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir,
//verifique e mostre em qual grupo de risco essa pessoa se encaixa.
//IDADE PESO
//                      Até 60     Entre 60 e 90          Acima de 90
//Menores que 20 anos    9                8                   7
//De 20 a 50             6                5                   4
//Maiores que 50         3                2                   1

       printf("Verifique em qual gripo de risco voce se encaixa:\n");
       printf("Insira a sua idade:\n");
       scanf("%d.\n", &idade);
       printf("Insira o seu peso em kg:\n");
       scanf("%f.\n", &peso);
       printf("-----------------------------------------------------------------\n");

       printf(" IDADE:                           PESO EM KG:\n");
       printf("                     Ate 60      Entre 60 e 90    Acima de 90\n");
       printf("Menos que 20 anos:      9                  8           7\n");
       printf("De 20 a 50              6                  5           4\n");
       printf("Maiores que 50          3                  2           1\n");

       printf("-----------------------------------------------------------------\n");

          if(idade <= 20)
          {
          if(peso < 60)
          {
            printf("Voce se encaixa no grupo 9");
          }
          else if (peso < 90)
          {
            printf("Voce se encaixa no grupo 8");
          }
          else  
          {
            printf("Voce se encaixa no grupo 7");
          }
          }



          if(idade <= 50)
          {
          if(peso < 60)
          {
            printf("Voce se encaixa no grupo 6");
          }
          else if (peso < 90)
          {
            printf("Voce se encaixa no grupo 5");
          }
          else  
          {
            printf("Voce se encaixa no grupo 4");
          }
          }



           if(idade > 50)
           {
           if(peso < 60)
           {
            printf("Voce se encaixa no grupo 3");
           }
           else if (peso < 90)
           {
            printf("Voce se encaixa no grupo 2");
           }
           else  
           {
            printf("Voce se encaixa no grupo 1");
           }
           }


        
        
        
        
        
        
       }



