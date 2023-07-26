#include <stdio.h>
int main()
{
   
    int i, j;
    int idade[2][2];
    float peso[2][2];
    char nome[4][50];
    int idadeM[2] = {0, 0};
    float pesoM[2] = {0, 0};
    int idadeMf[2] = {0, 0};
    float pesoMf[2] = {0, 0};
    int idadeF = 0;
    float pesoF = 0;
    

//25) Na série A do campeonato brasileiro de futebol de 2018, do qual fazem parte Grêmio, Flamengo, entre
//outros, participam 20 times. Sabendo-se que na documentação de cada time, constam, além de outros
//dados, peso e idade dos 22 jogadores, elabore um algoritmo que apresente as seguintes informações:
//a. O peso médio e a idade média de cada um dos times;
//b. O peso médio e a idade média de todos os participantes. 



   for( i = 0; i < 2; i++)
   {
         for( j = 0; j < 2; j++)
             {
 
                printf(" \t ------TIME: %d.\n", i);
           
                printf("Nome:\n");
                gets(nome[i]);
                fflush(stdin);

                printf("Idade:\n");
                scanf("%d.\n", &idade[i][j]);
                fflush(stdin);

                printf("Peso:\n");
                scanf("%f.\n", &peso[i][j]);
                fflush(stdin);

                printf("------------------------\n");
             }
   }
 
//a. O peso médio e a idade média de cada um dos times;


    for( i = 0; i < 2; i++)
    {      
         for( j = 0; j < 2; j++)
            
            {
                
                idadeM[i]+= idade[i][j];      
                pesoM[i]+= peso[i][j];

                

            }
    }
   
   idadeMf[0] = idadeM[0] / 2;
   idadeMf[1] = idadeM[1] / 2;
         
   pesoMf[0] = pesoM[0] / 2;
   pesoMf[1] = pesoM[1] / 2;

printf("\t -------------------------------------------------\n");    

     for( i = 0; i < 2; i++)
     {
        printf("--- PESO E IDADE MEDIA DO TIME: %d.\n", i);
        
        printf("Idade Media do Time: %d.\n", i);
        printf("%d.\n", idadeMf[i]);

        printf("Peso Medio do Time: %d.\n", i);
        printf("%.2f.\n", pesoMf[i]);
     }
     

//b. O peso médio e a idade média de todos os participantes. 

  idadeF = (idadeMf[0] + idadeMf[1]) / 2;
  pesoF = (pesoMf[0] + pesoMf[1]) / 2;

  printf("\t----------------------------------\n");
  printf("Peso Medio dos Times: %.2f.\n", pesoF);
  printf("Idade Media dos Times: %d.\n", idadeF);




}