#include <stdio.h>
#include <locale.h>
#include <string.h>



int main(){

    setlocale (LC_ALL, "Portuguese");

    float n1, n2, soma;

  printf("Esse algoritmo imprime o resultado de uma soma no caso do resultado ser maior que 10:\n");
  printf("Insira o primeiro número:");
  scanf("%f.\n", &n1);
  printf("Insira o segundo número:");
  scanf("%f.\n", &n2);
  
  soma = n1 + n2;

  if(soma > 10) {

   printf("%.1f.\n", soma);

  }
  
  else { printf("A soma dos números é inferior a 10.");
  }


}