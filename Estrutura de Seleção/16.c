#include <stdio.h>

int main()
{

    int i, num1, num2, calculo;

//16. Elabore um algoritmo que mostre o menu de opções a seguir, receba a opção do usuário e os
//dados necessários para executar cada operação.
//Menu de Opções
//1. Soma
//2. Subtração
//3. Multiplicação
//4. Divisão
//Digite a opção desejada: ____

printf("Digite o numero da operacao que deseja efetuar:\n");
printf("\t[1] Soma\n \t[2] Subtracao\n \t[3] Multiplicacao\n \t[4] Divisao\n");
scanf("\t %d.\n", &i);
fflush(stdin);


switch (i) 
{
    case 1: printf("Soma:\n");
            printf("No modo Soma, voce pode somar ate 2 numeros:\n");
            printf("Digite o primeiro numero:\n");
            scanf("%d.\n", &num1);
            fflush(stdin);
            printf("Digite o segundo numero:\n");
            scanf("%d.\n", &num2);
            fflush(stdin);
            printf("Resultado: \n");
                 calculo = num1 + num2;
                  printf("%d.\n", calculo);



     case 2: printf("Subtracao:\n");
            printf("No modo Subtracao, voce pode subtrair ate 2 numeros:\n");
            printf("Digite o primeiro numero:\n");
            scanf("%d.\n", &num1);
            fflush(stdin);
            printf("Digite o segundo numero:\n");
            scanf("%d.\n", &num2);
            fflush(stdin);
            printf("Resultado: \n");
                  calculo = num1 - num2;
                  printf("%d.\n", calculo);


    case 3: printf("Multiplicacao:\n");
            printf("No modo Multiplicacao, voce pode multiplicar 2 numeros:\n");
            printf("Digite o primeiro numero:\n");
            scanf("%d.\n", &num1);
            fflush(stdin);
            printf("Digite o segundo numero:\n");
            scanf("%d.\n", &num2);
            fflush(stdin);
            printf("Resultado: \n");
                  calculo = num1 * num2;
                  printf("%d.\n", calculo);


    case 4: printf("Divisao:\n");
            printf("No modo de Divisao, voce pode dividir um numero pelo outro:\n");
            printf("Digite o primeiro numero:\n");
            scanf("%d.\n", &num1);
            fflush(stdin);
            printf("Digite o segundo numero:\n");
            scanf("%d.\n", &num2);
            fflush(stdin);
            printf("Resultado: \n");
                  calculo = num1 / num2;
                  printf("%d.\n", calculo);              
                           
}



}
