#include <stdio.h>

#define c 1500

float pfdeus ( float i);

int main(){


float i;
float k;


printf("Esse algoritmo tem a capacidade de calcular e mostrar o salario reajustado de um funcionario.\n");
printf("O percentual de 35%% para um salario de ate 1500.00 e acima de 1500.00 recebe um aumento de 15%%.\n");
printf("Insira o valor do salario:\n");
scanf("%f.\n", &i);
k = pfdeus(i);
printf("%.2f", k);

fflush(stdin);

return 0;
}


float pfdeus (float i)  {
if(i <= 1500) {

   i = i * 1.30; 
   
   return i; }

   else {
   
    i = i * 1.15; 
    
    return i; }
}

