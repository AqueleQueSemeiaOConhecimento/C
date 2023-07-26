#include <stdio.h>

int main()
{

    int num1, num2;
    float precot;


//O cardápio de uma lanchonete é o seguinte:
//CÓDIGO PRODUTOS PREÇO
//1 Cachorro quente R$ 5,50
//2 Misto quente R$ 4,50
//3 Hamburguer R$ 6,00
//4 Salgado assado R$ 6,00
//5 Salgado Frito R$ 4,50
//6 Refrigerante lata R$ 5,00
//7 Refrigerante 600ml R$ 7,00
//8 Café pequeno R$ 4,00
//9 Café médio R$ 5,00
//Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por
//aquele lanche. Considere que a cada execução somente será calculado um item.
    
    printf("--------------------------------------\n");
    printf("O cardapio da lanchonete e o seguinte:\n\n");
    printf("\t [1] Cachorro Quente R$ 5,50\n");
    printf("\t [2] Misto quente R$ 4,50\n");
    printf("\t [3] Hamburguer R$ 6,00\n");
    printf("\t [4] Salgado assado R$ 6,00\n");
    printf("\t [5] Salgado frito R$ 4,50\n");
    printf("\t [6] Refrigerante lata R$ 5,00\n");
    printf("\t [7] Refrigerante 600ml R$ 7,00\n");
    printf("\t [8] Cafe pequeno R$ 4,00\n");
    printf("\t [9] Cafe medio R$ 5,00\n\n");

    printf("Insira o seu pedido:\n");
    scanf("%d.\n", &num1);
    fflush(stdin);
    printf("Insira o numero total de unidades:\n");
    scanf("%d.\n", &num2);

       switch (num1)
       {
        
        case 1:
        precot = num1 * 5.50 * num2;
        printf("Total do pedido:\n");
        printf("%.2f.\n", precot);
        break;


        case 2:
        precot =  4.50 * num2;
        printf("Total do pedido:\n");
        printf("%.2f.\n", precot);
        break;


        case 3:
        precot =  6.00 * num2;
        printf("Total do pedido:\n");
        printf("%.2f.\n", precot);
        break;


        case 4:
        precot = 6.00 * num2;
        printf("Total do pedido:\n");
        printf("%.2f.\n", precot);
        break;


        case 5:
        precot =  4.50 * num2;
        printf("Total do pedido:\n");
        printf("%.2f.\n", precot);
        break;


        case 6:
        precot =  5.00 * num2;
        printf("Total do pedido:\n");
        printf("%.2f.\n", precot);
        break;


        case 7:
        precot =  7.00 * num2;
        printf("Total do pedido:\n");
        printf("%.2f.\n", precot);
        break;


        case 8:
        precot =  4.00 * num2;
        printf("Total do pedido:\n");
        printf("%.2f.\n", precot);
        break;


        case 9:
        precot =  5.00 * num2;
        printf("Total do pedido:\n");
        printf("%.2f.\n", precot);
        break;

        default:
        printf("Numero invalido.");



       }





}