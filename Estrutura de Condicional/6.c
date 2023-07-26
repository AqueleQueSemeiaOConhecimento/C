#include <stdio.h>

int main()
{
     float peso, altura, imc;
     char nome[50];

//6. Um endocrinologista deseja controlar a saúde de seus pacientes e, para isso, utiliza o Índice de Massa
//Corporal (IMC). Sabendo que o IMC é calculado por meio da seguinte fórmula:
//IMC = peso / altura2
//Onde:
//- peso é dado em Kg
//- altura é dada em metros
//Elabore um algoritmo que leia o nome, o peso e a altura de um paciente, e apresente o nome do paciente
//e sua faixa de risco, baseando-se na seguinte tabela:
//IMC FAIXA DE RISCO
//Abaixo de 20 Abaixo do peso
//A partir de 20 até 25 Peso Normal
//Acima de 25 até 30 Excesso de peso
//Acima de 30 até 35 Obesidade
//Acima de 35 Obesidade mórbida

   printf("--------------IMC------------------\n");
   printf("Digite o seu nome:\n");
   scanf("%50[^\n]s", nome);
   fflush(stdin);
   printf("Digite o seu peso em kg:\n");
   scanf("%f.\n", &peso);
   printf("Digite a sua altura em metros:\n");
   scanf("%f.\n", &altura);
   
   imc = peso / (altura * altura);

       if(imc < 20)
         {
            printf("Nome: \n");
            puts(nome);
            printf("Abaixo do peso");
         }

      else if(imc < 25)
         {
            printf("Nome: \n");
            puts(nome);
            printf("Peso normal");
         } 

    else if(imc < 30)
         {
            printf("Nome: \n");
            puts(nome);
            printf("Excesso de peso");
         }  

    else if(imc < 35)
         {
            printf("Nome: \n");
            puts(nome);
            printf("Obesidade");
         }    

    else if(imc > 35)
         {
            printf("Nome: \n");
            puts(nome);
            printf("Obesidade morbida");
         }








}