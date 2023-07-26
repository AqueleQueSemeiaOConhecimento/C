#include <stdio.h>

int main()
{
    int i;
    int num[5];
    int maior, menor;
    float media = 0;
    
//16) Elabore um algoritmo que leia 5 números e imprima ao final, imprima o maior, menor, e a média dos
//números digitados. 

         for(i=0; i<5; i++)
         {
            printf("Digite um numero:\n");
            scanf("%d.\n", &num[i]);
            fflush(stdin);
         }

         menor = num[0];
         if(num[1] < menor) menor = num[1];
         if(num[2] < menor) menor = num[2];
         if(num[3] < menor) menor = num[3];
         if(num[4] < menor) menor = num[4];

         maior = num[0];
         if(num[1] > maior) maior = num[1];
         if(num[2] > maior) maior = num[2];
         if(num[3] > maior) maior = num[3];
         if(num[4] > maior) maior = num[4];

         printf("Maior: %d.\n", maior);
         printf("Menor: %d.\n", menor);

         media = (num[0] + num[1] + num[2] + num[3] + num[4]) / 5;
         printf("Media: %.2f.\n", media);








}