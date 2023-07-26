#include <stdio.h>

int main()
{

    int i;
    float par = 0;
    float impar = 0;
   

//13) Elabore um algoritmo que imprima todos os números pares e ímpares compreendidos entre 85 e 906,
//e imprimir, ao final, a soma dos pares, a soma dos ímpares, o percentual de pares, e o percentual de
//ímpares, 

    
     for ( i = 85; i < 907; i++)
     {
        
        printf("%d.\n", i);



        if(i % 2 == 0)
        {
            par++;

        }

        else
        {
            impar++;
        }
      
     }

   
     

     
        printf("Par = %.2f.\n", par);
        printf("Impar = %.2f.\n", impar);

        par = par / 822;
        par = par * 100;

        printf("%% de Par = %.2f.\n", par);

        impar = impar / 822;
        impar = impar * 100;


        printf("%% de Impar = %.2f.\n", impar);




}