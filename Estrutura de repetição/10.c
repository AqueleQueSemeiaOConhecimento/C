#include <stdio.h>

int main()
{  
    int i;
    int soma = 0;
    int negativados = 0;
    float num[20];

    


//10) Elabore um algoritmo que leia 20 números e imprima a soma dos positivos, e a quantidade de
//números negativos. 
   
     for(i = 0; i < 20; i++)
      {
        printf("Digite um numero positivo ou negativo.\n");
        scanf("%f.\n", &num[i]);
        fflush(stdin);

      }


      for( i = 0; i < 20; i++)
       {
         
          if(num[i] <= 0)
          {
            negativados++;




          }
          
       }

         for( i = 0; i < 20; i++)
       {
          if(num[i] >= 0)
          {
            soma += num[i];     

          }
 
       
        }
          
          printf("Valor dos Positivos: %d.\n", soma);
          printf("Quantidade de numeros negativos: %d.\n", negativados);

   



}