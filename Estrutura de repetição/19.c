#include <stdio.h>

int main()
{
    int i;
    int idade[12];
    float peso[12];
    float peso18, p18 = 0;
    float peso28, p28 = 0;
    float peso30, p30 = 0;

//19) Elabore um algoritmo que receba a idade e o peso de 12 pessoas. Calcular e imprimir as médias dos
//pesos das pessoas da mesma faixa etária. As faixas etárias são: de 0 a 18 anos, e maiores de 28 anos. 

        for( i = 0; i < 12; i++)
           {
            printf("Digite a Sua idade:\n");
            scanf("%d.\n", &idade[i]);
            fflush(stdin);
            printf("Digite o seu peso:\n");
            scanf("%f.\n", &peso[i]);
            fflush(stdin);
           }

         for( i = 0; i < 12; i++)
         {
            if(idade[i] < 18)
            {
                peso18 += peso[i];
                p18++;
            }
          

         else if(idade[i] < 28)
            {
                peso28 += peso[i];
                p28++;
            }

         
         
         else if(idade[i] > 28)
            {
                peso30 += peso[i];
                p30++;
            }
         }  
         
         peso18 = peso18 / p18;

         printf("Media do peso da faixa Etaria 0 a 18:\n");
         printf("%.2f.\n", peso18);
          

         peso28 = peso28 / p28;

         printf("Media do peso da faixa Etaria 18 a 28:\n");
         printf("%.2f.\n", peso28);

         peso30 = peso30 / p30;

         printf("Media do peso da faixa Etaria 28 +:\n");
         printf("%.2f.\n", peso30);


}