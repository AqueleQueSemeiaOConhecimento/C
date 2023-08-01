#include <stdio.h>

int main()
{
    int num;

//6) Dado um vetor A de 5 elementos A={7, 21, 15, 12, 82}, elabore um programa que solicite ao usuário um
//número e verifique se esse número encontra-se inserido no vetor. Caso o elemento esteja inserido no
//vetor, deve-se exibir uma mensagem indicando que o elemento foi encontrado e sua posição, caso
//contrário, exibir a seguinte mensagem “Elemento não encontrado”. 

    printf("Insira um numero e veremos se esta no sistema:\n");
    scanf("%d.\n", &num);

    
    switch (num)
    {
    case 7:
        printf("Numero encontrado.");
        break;
    
    case 21:
        printf("Numero encontrado.");
        break;

    case 15:
        printf("Numero encontrado.");

    case 12:
        printf("Numero encontrado.");
        break;

    case 82:
        printf("Numero encontrado.");         

    default:
        printf("Elemento nao encontrado.");
        break;
    }


}