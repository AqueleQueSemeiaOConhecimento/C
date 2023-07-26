#include <stdio.h>

int main()
{
     int i;
     float percentual = 0.015;
     float salario1 = 0;
    

//27) Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que: Esse funcionário
//foi contratado em 2005, com salário inicial de R$ 1.000,00.
//a) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial.
//b) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do
//ano anterior. Faça um programa que determine o salário atual desse funcionário.

           

            for( i = 2006; i <= 2023; i++)
               {  

                percentual*= 2;

               }
               
               salario1 = 1000 * (percentual + 1);

               printf("Percentual 7: %.3f\n", percentual);;
               printf("Salario =: %.3f.\n", salario1);



}