#include <stdio.h>
int main()
{
      float salariomin, salarioatual, novosala, reajuste;
      char nome[50];
      
     

//8. Escrever um algoritmo para uma empresa que decide dar um reajuste a seus funcionários
//com os seguintes critérios:
//A)50% para os funcionários que ganham menos de 3 salários mínimos;
//B)20% para aqueles que ganham entre 3 e 10;
//C)15% para aqueles que ganham entre 10 e 20;
//D)10% para os demais funcionários.
//Leia o nome do funcionário, seu salário e o valor do salário mínimo. Calcule o seu novo salário
//reajustado. Escrever o nome do funcionário, o reajuste e seu novo salário.

   printf("Ola vamos ver como seu salario fica com o novo reajuste >//<\n");
   printf("Digite o seu nome:\n");
   scanf("%50[^\n]s", nome);
   fflush(stdin);

   printf("Digite o valor do salario minimo atual:\n");
   scanf("%f.\n", &salariomin);
   fflush(stdin);

   printf("Digite o valor do seu salario atual:\n");
   scanf("%f.\n", &salarioatual);

         if(salarioatual < (3 * salariomin))
         {
            novosala = salarioatual * 1.5;
            reajuste = novosala - salarioatual;
            printf("---------------------------\n");
            printf("Seu nome e:\n");
            puts(nome);
            printf("Seu salario atual e de:");
            printf("R$ %.2f.\n", salarioatual);
            printf("Reajuste de:\n");
            printf("R$ %.2f.\n", reajuste);
            printf("Salario reajustado:\n");
            printf("R$ %.2f.\n", novosala);

         }

         else if((salarioatual > 3* salariomin) and (salarioatual < 10 * salariomin))
         {
            novosala = salarioatual * 1.2;
            reajuste = novosala - salarioatual;
            printf("---------------------------\n");
            printf("Seu nome e:\n");
            puts(nome);
            printf("Seu salario atual e de:");
            printf("R$ %.2f.\n", salarioatual);
            printf("Reajuste de:\n");
            printf("R$ %.2f.\n", reajuste);
            printf("Salario reajustado:\n");
            printf("R$ %.2f.\n", novosala);

         }

         else if((salarioatual > 10 * salariomin) and (salarioatual < 20 * salariomin))
         {
            novosala = salarioatual * 1.15;
            reajuste = novosala - salarioatual;
            printf("---------------------------\n");
            printf("Seu nome e:\n");
            puts(nome);
            printf("Seu salario atual e de:");
            printf("R$ %.2f.\n", salarioatual);
            printf("Reajuste de:\n");
            printf("R$ %.2f.\n", reajuste);
            printf("Salario reajustado:\n");
            printf("R$ %.2f.\n", novosala);

         }

         else 
         {
            novosala = salarioatual * 1.1;
            reajuste = novosala - salarioatual;
            printf("---------------------------\n");
            printf("Seu nome e:\n");
            puts(nome);
            printf("Seu salario atual e de:");
            printf("R$ %.2f.\n", salarioatual);
            printf("Reajuste de:\n");
            printf("R$ %.2f.\n", reajuste);
            printf("Salario reajustado:\n");
            printf("R$ %.2f.\n", novosala);

         }







}