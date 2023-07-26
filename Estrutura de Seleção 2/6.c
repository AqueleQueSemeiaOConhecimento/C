#include <stdio.h>

int main()
{
    int num1, i;
    float num[3];
    float peso[3];
    float media;

     //6. Um usuário deseja um algoritmo onde possa escolher que tipo de média deseja calcular a partir de 3
     //notas. Faça um algoritmo que leia as notas, a opção escolhida pelo usuário e calcule a média. 
     printf("---------------------------------------\n");
     printf("Escolha o modelo de calculo da media:\n");
     printf("\t[1] Media Aritmetica:\n");
     printf("\t[2] Media Ponderada:\n");
     scanf("%d.\n", &num1);

            switch (num1)

        {
            case 1:
              printf("Media Aritimetica escolhida.\n");
              
              for(i=0; i<3; i++)
              {
                printf("Digite uma nota:\n");
                scanf("%f.\n", &num[i]);
                fflush(stdin);
              }
               printf("Media Aritimetica:");
               media = (num[0] + num[1] + num[2]) / 3;
               printf("%.2f.\n", media);



            case 2:
              printf("Media Ponderada escolhida.\n");
              
              for(i=0; i<3; i++)
              {
                printf("Digite uma nota:\n");
                scanf("%f.\n", &num[i]);
                fflush(stdin); 
              }

              for(i=0; i<3; i++)
              {
                printf("Digite os respectivos pesos das notas:\n");
                scanf("%f.\n", &peso[i]);
                fflush(stdin);
              }  

               printf("Media Ponderada:");
               media = ((num[0] * peso [0])+ (num[1] * peso[1]) + (num[2] * peso[2])) / (peso[0] + peso[1] + peso [2]);
               printf("%.2f.\n", media);   

               default:
               

               for(i=411; i<9999; i++)
               {
               printf("#ERRO%d.\n", i);
               }
            



        }


     



}
