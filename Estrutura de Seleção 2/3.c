#include <stdio.h>

 int main()
 {

    int i;
    int num[3];
    int min, max;
    //3. Faça um algoritmo que leia três números e mostre-os em ordem decrescente
    
    printf("Esse algoritmo pega 3 numeros e os coloca em ordem decrescente:\n");
    printf("Divirta-se >//<\n");

         for(i=0; i<3; i++)
         {
          printf("Digite um numero:\n");
          scanf("%d.\n", &num[i]);
          fflush(stdin);
         }

         min = num[0];

         if (num[1] < min) min = num[1];
         if (num[2] < min) min = num[2];

         max = num[0];

         if (num[1] > max) max = num[1];
         if (num[2] > max) max = num[2];

         printf("Ordem decrescente:\n");
         printf("%d.\n", max);
         if( num[0] != min && num[0] != max) {printf("%d.\n", num[0]);}
         if( num[1] != min && num[1] != max) {printf("%d.\n", num[1]);}
         if( num[2] != min && num[2] != max) {printf("%d.\n", num[2]);}
         printf("%d.\n", min);



        







 }