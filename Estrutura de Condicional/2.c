#include <stdio.h>
int main()
{
    float salarioatual, salarionovo, aumento;
//2. Faça um algoritmo que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
//mostre o valor do aumento e o novo salário.
//Salário Percentual de aumento
//Abaixo de R$ 3000,00 15%
//De R$ 3000,00 a R$ 6000,00 10%
//Acima de R$ 6000,00 a R$ 9000,00 5%
//Acima de R$ 9000,00 0%

         printf("Digite o valor do seu salario atual:\n");
         scanf("%f.\n", &salarioatual);

              if(salarioatual < 3000)
             {
                salarionovo = salarioatual * 1.15;
                aumento = salarionovo - salarioatual;
                printf("Salario novo e igual a: R$ %.2f\n", salarionovo);
                printf("Aumento de: R$ %.2f\n", aumento);
                printf("Aumento em percentual de 15%%");
              
             }

             else if(salarioatual < 6000)
             {
                salarionovo = salarioatual * 1.1;
                aumento = salarionovo - salarioatual;
                printf("Salario novo e igual a: R$ %.2f\n", salarionovo);
                printf("Aumento de: R$ %.2f\n", aumento);
                printf("Aumento em percentual de 10%%");
              
             }

             else if(salarioatual < 9000)
             {
                salarionovo = salarioatual * 1.05;
                aumento = salarionovo - salarioatual;
                printf("Salario novo e igual a: R$ %.2f\n", salarionovo);
                printf("Aumento de: R$ %.2f\n", aumento);
                printf("Aumento em percentual de 5%%");
              
             }

             else 
             {
                salarionovo = salarioatual * 1;
                aumento = salarionovo - salarioatual;
                printf("Salario novo e igual a: R$ %.2f\n", salarionovo);
                printf("Aumento de: R$ %.2f\n", aumento);
                printf("Aumento em percentual de 0%%");
              
             }
 


}