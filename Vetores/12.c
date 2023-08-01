#include <stdio.h>

int main()
{
    int codigo[10];
    int numproduto[10];
    int i;
    int codigocliente;
    int codigoproduto;
    int numprodutoDesej;
    int numProdutoFinal;

//12) Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o
//programa deverá preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código
//do produto e o segundo, ao total desse produto em estoque. Logo após, o programa deverá ler um
//conjunto indeterminado de dados contendo o código de um cliente e o código do produto que ele deseja
//comprar, juntamente com a quantidade. Código do cliente igual a zero indica fim do programa.
//O programa deverá verificar:
//a) Se o código do produto solicitado existe. Se existir, tentar atender o pedido; caso contrário, exibir a
//mensagem, Código inexistente;
//b) Cada pedido feito por um cliente só poderá ser atendido integralmente. Caso isso não seja possível,
//escrever a mensagem--- Não temos estoque suficiente dessa mercadoria. Se puder atendê-lo, escrever a
//mensagem Pedido atendido. Obrigado e volte sempre;
//c) Efetuar a atualização do estoque somente se o pedido for atendido integralmente;
//d) No final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados.

    for( i = 0; i < 10; i++)
    {
        printf("Insira o codigo do produto %d.\n", i + 1);
        scanf("%d.\n", &codigo[i]);
        fflush(stdin);
        printf("Quantida de produtos no estoque:\n");
        scanf("%d.\n", &numproduto[i]);
        fflush(stdin);
    }

    printf("\t------------------------------------\n");
    printf("Insira seu codigo de cliente:\n");
    scanf("%d.\n", &codigocliente);
    fflush(stdin);

    printf("\t------------------------------------\n");

    printf("Insira o codigo do produto que deseja:\n");
    scanf("%d.\n", &codigoproduto);
    fflush(stdin);
    printf("\t------------------------------------\n");

    for( i = 0; i < 10; i++)
    {
        if(codigo[i] == codigoproduto)
        {
            printf("Atualizando... \n");
            printf("Codigo encontrado.\n");

            printf("\t------------------------------------\n");
            printf("Digite quantos produtos voce deseja:\n");
            scanf("%d.\n", &numprodutoDesej);
            
            if( numproduto[i] >= numprodutoDesej)
            {
                printf("Pedido atendido, obrigado, volte sempre.\n");

                numProdutoFinal = numproduto[i] - numprodutoDesej;

                printf("Atualizando estoque do produto de codigo %d.\n", codigo[i]);
                printf("Estoque atual: %d.\n", numProdutoFinal);
                break;
            }

            else if( numproduto[i] < numprodutoDesej)
            {
                printf("Nao temos estoque suficiente dessa mercadoria.\n");
                break;
            }
       
            else
            {
                printf("Codigo nao existente.\n");
                break;
            }
        }

        
    }




}