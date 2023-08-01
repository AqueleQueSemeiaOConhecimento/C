#include <stdio.h>

     int main()
{
     float vetorA[5];
     int i;

//4) Elabore um programa que entre com 5 números inteiros em um vetor A, e imprima o índice do primeiro
//número negativo, se houver. Caso não existam números negativos, imprimir a seguinte mensagem
//“Negativo não encontrado”.


for ( i = 0; i < 5; i++)
{
   printf("Digite um numero:\n");
   scanf("%f.\n", &vetorA[i]);
   fflush(stdin);
}

for ( i = 0; i < 5; i++)
{
    if(vetorA[i] < 0)
    {
        printf("%.2f.\n", vetorA[i]);
    }

    else
    {
        printf("Negativo nao encontrado.\n");
    }
}



}