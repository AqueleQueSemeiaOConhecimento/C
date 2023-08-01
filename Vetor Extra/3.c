#include <stdio.h>

int main()

{
    char nome[8][50];
    int dvdLocados[8];
    int clientes = 3;
    int i;
    int locacaoGratis = 0;

//3) Faça um programa que receba o nome de oito clientes e armazene-os em um vetor. Em um segundo vetor,
//armazene a quantidade de DVDs locados em 2011 por cada um dos oito clientes. Sabe-se que, para cada dez
//locações, o cliente tem direito a uma locação grátis. Faça um programa que mostre o nome de todos os clientes,
//como a quantidade de locações grátis a que ele tem direito.

   for( i = 0; i < clientes; i++)
   {
    printf("Insira o seu nome:\n");
    gets(nome[i]);
    fflush(stdin);

    printf("Insira o numero de DVD locados:\n");
    scanf("%d.\n", &dvdLocados[i]);
    fflush(stdin);
   }

   for( i = 0; i < clientes; i++)
   {

    locacaoGratis = 0;

    if(dvdLocados[i] >= 10)
    { 
      locacaoGratis = dvdLocados[i] / 10;
      printf("O cliente:\n");
      puts(nome[i]);
      printf("Tem direito a %d locacao gratis.\n", locacaoGratis);  
    }
   }

}