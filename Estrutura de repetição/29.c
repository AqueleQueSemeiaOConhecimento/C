#include <stdio.h>

int main()
{
    int i;
    int numeroPecas[5];
    int operario[5];
    int sexo[5];
    int sexoMas = 0;
    int sexoFem = 0;
    int numeroOpe = 0;
    int numeroPecasMes = 0;
    float salario[5];
    float folhaPag = 0;
    float pecasMas = 0;
    float pecasMas2 = 0;
    float pecasFem = 0;
    float pecasFem2 = 0;
    int salarioMaior = 0;
    int numOp = 0;

    for( i = 0; i < 5; i++)
    {
        printf("Operario numero:\n");
        scanf("%d.\n", &operario[i]);
        printf("Digite o numero de pecas que fez:\n");
        scanf("%d.\n", &numeroPecas[i]);
        fflush(stdin);
        scanf("Digite seu sexo:\n");
        printf("[1] Masculino.\n");
        printf("[2] Feminino.\n");
        scanf("%d.\n", &sexo[i]);
        fflush(stdin);
    }

//a) leia várias linhas, contendo cada uma:
//• o número do operário; 
     for( i = 0; i < 5; i++)
     {
        numeroOpe++;
     }

     printf("Numero total de Operarios: %d.\n", numeroOpe);


//• o sexo do operário;
    for ( i = 0; i < 5; i++)
    {
        if(sexo[i] == 1)
        {
            sexoMas++;
        }

        else
        {
            sexoFem++;
        }
    }

    printf("Homens Operarios: %d.\n", sexoMas);
    printf("Mulheres Operarios: %d.\n", sexoFem);


//• o salário de cada operário;
    for( i = 0; i < 5; i++)
    {
        if(numeroPecas[i] <= 30)
        {
            salario[i] = 1000;
            printf("Operario: %d.\n", operario[i]);
            printf("Salario: %.2f.\n", salario[i]);
        }

        else if(numeroPecas[i] <= 35)
        {
            numeroPecas[i] = numeroPecas[i] - 31;
            salario[i] = numeroPecas[i] * 0.03;
            salario[i] = (salario[i] + 1) * 1000; 

            printf("Operario: %d.\n", operario[i]);
            printf("Salario: %.2f.\n", salario[i]);
        }

        else if(numeroPecas[i] > 35)
        {
            numeroPecas[i] = numeroPecas[i] - 35;
            salario[i] = numeroPecas[i] * 0.05;
            salario[i] = (salario[i] + 1) * 1000;

            printf("Operario: %d.\n", operario[i]);
            printf("Salario: %.2f.\n", salario[i]);
        }

    }

//• o número total de peças fabricadas por mês;
     for( i = 0; i < 5; i++)
     {
        numeroPecasMes+= numeroPecas[i];
     }

     printf("Numero total de Pecas por mes: %d.\n", numeroPecasMes);    

//• o total da folha mensal de pagamento da fábrica;     
     for( i = 0; i < 5; i++)
     {
        folhaPag+= salario[i];
     }

//• a média de peças fabricadas pelos homens em cada classe;
     for( i = 0; i < 5; i++)
     {
        if( sexo[i] == 1 )
        {
            pecasMas+= numeroPecas[i];
            pecasMas2++;
        }

        else if( sexo[i] == 2 )
        {
            pecasFem+= numeroPecas[i];
            pecasFem2++;            
        }
     }     

     pecasMas = pecasMas / pecasMas2;
     pecasFem = pecasFem / pecasFem2;

     printf("Media de Pecas fabricadas pelos Homens: %.2f.\n", pecasMas);
     printf("Media de Pecas fabricadas pelas Mulheres: %.2f.\n", pecasFem);


     salarioMaior = salario[0];

     for( i = 0; i < 5; i++)
     {
        if(salario[i] > salarioMaior) 
        {
            salarioMaior = salario[i];
            numOp = operario[i];
        }
     }

     printf("O operario(a) que tem o maior salario e o operario de numero %d.\n", numOp);
     printf("O maior salario e de: %d.\n", salarioMaior);

     



    

    


//29) Numa fábrica trabalham homens e mulheres divididos em três classes:

//A – os que fazem até 30 peças por mês;
//B – os que fazem de 31 a 35 peças por mês;
//C – os que fazem mais de 35 peças por mês.

//A classe A recebe salário-mínimo. A classe B recebe salário-mínimo e mais 3% do salário-mínimo por
//peça, acima das 30 iniciais. A classe C recebe salário-mínimo e mais 5% do salário-mínimo por peça
//acima das 30 iniciais.

//Fazer um algoritmo que:

//a) leia várias linhas, contendo cada uma:
//• o número do operário;
//• o número de peças fabricadas por mês;
//• o sexo do operário;

//b) calcule e escreva:
//• o salário de cada operário;
//• o total da folha mensal de pagamento da fábrica;
//• o número total de peças fabricadas por mês;
//• a média de peças fabricadas pelos homens em cada classe;
//• a média de peças fabricadas pelas mulheres em cada classe;
//• o número do operário ou operária de maior salário.
//A fábrica possui 15 funcionários

}