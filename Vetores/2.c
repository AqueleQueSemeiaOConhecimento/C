#include <stdio.h>

     int main()
{
      int vetorA[5], vetorT[5], i;

//2) Elabore um programa que entre com 5 números inteiros em um vetor A, e gere e imprima o vetor T
//triplo, que deverá conter os elementos do primeiro vetor multiplicados por 3. 

    for( i = 0; i < 5; i++)
    {
        printf("Digite um numero:\n");
        scanf("%d.\n", &vetorA[i]);
        fflush(stdin);
    }

    for( i = 0; i < 5; i++)
    {
        vetorT[i] = vetorA[i] * 3;
    }

    for( i = 0; i < 5; i++)
    {
        printf("%d.\n", vetorT[i]);
    }



}     