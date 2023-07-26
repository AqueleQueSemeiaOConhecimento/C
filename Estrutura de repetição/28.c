#include <stdio.h>

int main()
{
    int i;
    int cidade[5];
    int veiculosP[5];
    int acidenteT[5];
    int maior = 0;
    int cidademaior = 0;
    int menor = 0;
    int cidademenor = 0;
    float mediaV = 0;
    float mediaVf = 0;
    float mediaVf2 = 0;

//28) Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de transito.
//Foram obtidas os seguintes dados:
//a) O código da cidade;
//b) Número de veículos de passeio;
//c) Número de acidentes de transito com vítimas.
//Deseja-se saber:
//a) Qual o maior e o menor índice de acidentes de transito e a que cidade eles pertencem;
//b) Qual a média de veículos nas cinco cidades juntas;
//c) Qual a média de acidentes de transito nas cidades com menos de 2000 veículos de passeio. 

      for( i = 0; i < 5; i++)
         {
            printf("Entre com o codigo da cidade: \n");
            scanf("%d.\n", &cidade[i]);
            fflush(stdin);

            printf("Numero de veiculos de passeio: \n");
            scanf("%d.\n", &veiculosP[i]);

            printf("Numero de acidentes de transito com vitimas: \n");
            scanf("%d.\n", &acidenteT[i]);

         }

//a) Qual o maior e o menor índice de acidentes de transito e a que cidade eles pertencem;

         menor = acidenteT[0];

          for( i = 0; i < 5; i++)
            {
                if(acidenteT[i] <= menor)
                {
                cidademenor = cidade[i];
                menor = acidenteT[i];
                }

                else
                {

                }
            }

            printf("Menor indice de acidentes: %d.\n", menor);
            printf("Cidade pertencente: %d.\n", cidademenor);

            printf("------------------------------\n");

         maior = acidenteT[0];


         for( i = 0; i < 5; i++)
            {
                
                if(acidenteT[i] >= maior)
                {
                cidademaior = cidade[i];
                maior = acidenteT[i];
                }

                else
                {

                }
            }

            printf("Maior indice de acidentes: %d.\n", maior);
            printf("Cidade pertencente: %d.\n", cidademaior);

//b) Qual a média de veículos nas cinco cidades juntas;

       for( i = 0; i < 5; i++)
       {
        mediaV+= veiculosP[i];
       }

       mediaV = mediaV / 5;

       printf("Media de veiculos: %.1f.\n", mediaV);


//c) Qual a média de acidentes de transito nas cidades com menos de 2000 veículos de passeio. 

     for( i = 0; i < 5; i++)
     {
        if(veiculosP[i] < 2000)
          {
            mediaVf+= veiculosP[i];
            mediaVf2++;
          }

          else
          {

          }
     }

     mediaVf = mediaVf / mediaVf2;

         printf("NUmero medio de acidente de transito com cidades com menos de 2000 veiculos\n");
         printf(" de passeio: %.2f\n", mediaVf);

          
          







}