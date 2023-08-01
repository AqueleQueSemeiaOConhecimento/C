#include <stdio.h>

struct Registro
{
    char nome[100];
    char codigo_conta[10];
    float saldo;
};


char conta (char nome, char codigo_conta);

float depositar (float saldo, float deposito);

float sacar (float saldo, float sacar1);

float verificarSaldo (float saldo);

int main()
{
    typedef struct Registro Registro;

    int escolha;
    char regristro1;
    float deposito;
    float deposito1;
    float sacar1;
    float sacar2;
    float versaldo;

    Registro res = {"Marcos", "python", 9000};


        printf("\t------ Sistema Bancario ------\n");
        printf("[1]. Criar Conta\n");
        printf("[2]. Depositar Dinheiro\n");
        printf("[3]. Sacar Dinheiro\n");
        printf("[4]. Verificar Saldo\n");
        printf("[5]. Sair\n");
        printf("Escolha a opcao: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1: regristro1 = conta(res.nome, res.codigo_conta);
            break;

        case 2: deposito1 = depositar(res.saldo, deposito);
            break;

        case 3: sacar2 = sacar(res.saldo, sacar1);
            break;

        case 4: versaldo = verificarSaldo(res.saldo);
            break;

        case 5: printf("Obrigado por usar os servicos do bando Olimpo, volte sempre.\n");
            break;               
        
        default:
            printf("3RR0#404.\n");
            break;
        }

}
char conta (char nome, char codigo_conta)
{
   printf("Bem vindo ao banco Olimpo.\n");
   printf("insira seu nome de usuario:\n");
   scanf("%s.\n", &nome);
   fflush(stdin);
   printf("Atualizando...\n");
   printf("\n");
   printf("insira seu codigo de conta:\n");
   scanf("%s.\n", &codigo_conta);
   printf("Cadastro realizado com sucesso, obrigado volte sempre.\n");
   
}

float depositar (float saldo, float deposito)
{
    printf("Seu saldo atual e de %.2f.\n", saldo);
    printf("Quanto Desejada depositar?\n");
    scanf("%f.\n", &deposito);
    saldo = saldo + deposito;
    printf("---Atualizando...\n");
    printf("Seu saldo atual e de %.2f.\n", saldo);
    printf("Deposito realizado com sucesso, obrigado volte sempre.\n");
}

float sacar (float saldo, float sacar1)
{
    printf("Digite o valor que deseja sacar:\n");
    scanf("%f.\n", &sacar1);
    saldo = saldo - sacar1;
    printf("Voce sacou %.2f.\n", sacar1);
    printf("Seu saldo atual e de %.2f.\n", saldo);
    printf("Saque feito com exito, obrigado volte sempre.\n");
}

float verificarSaldo (float saldo)
{   
    printf("Seu saldo atual e de %.2f.\n", saldo);
    printf("Obrigado volte sempre.\n");
}