#include <stdio.h>
int main()
{
    int i;
    int numerofilhos[10];
    char nome[10][50];
    int salario[10];
    int numf1 = 0;
    int numf2 = 0;
    float salariof1 = 0;
    float salariof2 = 0;
   
//20) Elabore um algoritmo que leia o nome, salário e número de filhos de 10 pessoas, e calcule:
//a. o salário médio das pessoas que possuam 2 filhos
//b. o salário médio das pessoas que possuem 1 filho
//c. qual a média salarial maior, entre os que tem um e dois filhos 

    for( i = 0; i < 2; i++)
        {
            printf("Insira o seu nome:\n");
            gets(nome[i]);
            fflush(stdin);
            printf("Insira o valor do seu salario:\n");
            scanf("%d.\n", &salario[i]);
            fflush(stdin);
            printf("Insira o numero de filhos que voce tem:\n");
            scanf("%d.\n", &numerofilhos[i]);
            fflush(stdin);
        }


        for( i = 0; i < 2; i++)
            {
                if(numerofilhos[i]  == 1)
                {
                    salariof1 += salario[i]; 
                    numf1++;        
                }

                else if(numerofilhos[i] == 2)
                {
                    salariof2 += salario[i];
                    numf2++;
                }
            }

             salariof2 = salariof2 / numf2;
             salariof1 = salariof1 / numf1;

            printf("Media salarial de quem tem 1 filho: %.2f.\n", salariof1);
            printf("Media salarial de quem tem 2 flhos: %.2f.\n", salariof2);

            if(salariof1 > salariof2)
            {
                printf("As pessoas que tem 1 filho possuem uma media salarial maior.");
            }

            else
            {
                printf("As pessoas que tem 2 filhos possuem uma media salarial maior.");
            }


}