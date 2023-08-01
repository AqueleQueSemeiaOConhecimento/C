#include <stdio.h>

int main()
{ 
     float vendasDoAno[12][4];
     int mes, semana;
     float ganhoMes, ganhoSem, ganhoAno;

//5) Elabore um algoritmo que carregue uma matriz 12 x 4 com os valores das vendas de uma loja,
//onde cada linha representa um mês do ano, e cada coluna, uma semana do mês. Calcule e
//imprima:
//a. Total vendido em cada mês do ano;
//b. Total vendido em cada semana durante todo o ano;
//c. Total vendido no ano. 
       
        for( mes = 0; mes < 12; mes++)
           {
            for ( semana = 0; semana < 4; semana++)
                {   printf("----------------------------------------\n"); 
                    ganhoSem = 0;
                    printf("Mes: %d.\n", mes + 1);
                    printf("Ganhos Da Semana: %d.\n", semana + 1);
                    scanf("%f.\n", &vendasDoAno[mes][semana]);
                    fflush(stdin);
                    
                    ganhoSem+= vendasDoAno[mes][semana];

                    printf("Ganhos total da Semana %d.\n", semana + 1);
                    printf("%.2f.\n", ganhoSem);

                    printf("-----------------------------------------\n");
                }      
           }

           ganhoAno = 0;
           for( mes = 0; mes < 12; mes++)
           {
            ganhoMes = 0;
               for( semana = 0; semana < 4; semana++)
                  {
                    ganhoMes+= vendasDoAno[mes][semana];
                    ganhoAno+= vendasDoAno[mes][semana];
                  }
                  printf("Ganho do Mes %d.\n", mes);
                  printf("%.2f.\n", ganhoMes);
           }

           printf("Ganho total do Ano: %.2f.\n", ganhoAno);


}