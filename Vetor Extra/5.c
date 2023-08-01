#include <stdio.h>

int main()
{
    int janela[24] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int corredor[24] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int escolha;
    int i;

//5) Uma empresa possui ônibus com 48 lugares (24 nas janelas e 24 no corredor). Faça um programa que utilize dois
//vetores para controlar as poltronas ocupadas no corredor e nas janelas. Considere que 0 (zero) representa poltrona
//desocupada e 1 poltrona ocupada.
//Inicialmente, todas as poltronas estarão livres. Depois disso, o programa deverá apresentar as seguintes opções:
//M E N U
//1-Vender passagem
//2- Mostrar mapa de ocupação do ônibus
//3- Encerrar
//Quando a opção escolhida for (1) Vender Passagem, deverá ser perguntado se o usuário deseja janela ou corredor e
//o número de poltrona. O programa deverá então, dar uma das seguintes mensagens:
//Venda efetivada – se a poltrona solicitada estiver livre, marcando-a como ocupada.
//Poltrona ocupada – se a poltrona solicitada não estiver disponível para venda.
//Ônibus lotado – quando todas as poltronas já estiverem ocupadas.
//Quando a opção escolhida for (2) Mostrar Mapa de Ocupação do Ônibus, deverá ser mostrada uma listagem
//conforme a seguir:
//JANELA CORREDOR
//1 - Ocupada 1 - Ocupada
//2 - Ocupada 2 - Livre
//3 - Livre 3 - Livre
//4 - Livre 4 - Ocupada
//Quando for escolhida a opção (3) encerrar, a execução do programa deverá ser finalizada.

printf("\t-------------MENU-.\n");
printf("\t--[1]Vender Passagem\n");
printf("\t--[2]Mostrar mapa de ocupacao do onibus\n");
printf("\t--[3]Encerrar\n");
scanf("%d.\n", &escolha);
fflush(stdin);
 
switch (escolha)
{
case 1:
     printf("Deseja janela ou corredor?\n");
     printf("[1]Janela\n");
     printf("[2]Corredor\n");
     scanf("%d.\n", &escolha);

     switch (escolha)
     {
     case 1:
        printf("Digite o numero da poltrona.\n");
        scanf("%d.\n", &escolha);
        i = escolha;

        if(janela[i] == 0)
        {
            printf("Venda efetivada.\n");
            janela[i] = 1;
        }
        
        else if( janela[i] != 0)
        {
            printf("Poltrona Ocupada.\n");
        }
        break;

     case 2:
        printf("Digite o numero da poltrona.\n");
        scanf("%d.\n", &escolha);
        i = escolha;

        if(corredor[i] == 0)
        {
            printf("Venda efetivada.\n");
            corredor[i] = 1;
        }
        
        else if( corredor[i] != 0)
        {
            printf("Poltrona Ocupada.\n");
        }
        break;    
     }

    break;

    case 2: printf("------\t Mapa do onibus:\n");
    printf("0 para livre e 1 para ocupada.\n");
    printf("Janela:\n");
    
    for( i = 0; i < 24; i++)
    {
       printf("\t %d \n", janela[i]);
    }

    printf("--------------------------------------------------\n");
    printf("Corredor:\n");

    for( i = 0; i < 24; i++)
    {
        printf("\t %d \n", corredor[i]);
    }

    break;

    case 3: printf("Compra Encerrada!.\n");
    break;


default:
    printf("Numero invalido.\n");
    break;
}

 


}