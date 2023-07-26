#include <stdio.h>

int main()
{
    int num[4][1];
    int i, operacao;

//1) Elabore um algoritmo que leia quatro números ,usando uma estrutura de repetição, e imprima a raiz
//quadrada de cada um.

for(i=0; i<4; i++)
{
    printf("Digite um numero:\n");
    scanf("%d.\n", &num[i][1]);
    fflush(stdin);
}



for(i=0; i<4; i++)
{
   operacao = num[i][1] * num[i][1];
   printf("%d.\n", operacao);
   fflush(stdin);
}

}