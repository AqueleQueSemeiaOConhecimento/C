#include <stdio.h>

int main()
{
    int i, gen, idade;
    char nome[20][50];
    

//8) Elabore um algoritmo que leia o nome, idade e sexo de 20 pessoas. A cada leitura, imprima o nome, se
//a pessoa for do sexo masculino, se tiver mais de 21 anos.

    for(i=0; i<20; i++)
    {
        printf("\tDigite o Seu nome:\n");
        scanf("%50[^\n]s", nome[i]);
        fflush(stdin);
        printf("\t Digite sua idade:\n");
        scanf("\t %d.\n", &idade);
        printf("\t Informe o seu sexo:\n");
        printf("\t [1] Masculino.\n");
        printf("\t [2] Feminino.\n");
        scanf("%d.\n", &gen);

        
        
        
        switch (gen)
        {
          case 1:
                 if(idade >= 21)
                 {
                 printf("Seu nome e:\n");
                 puts(nome[i]);
                 }
                 else
                 {
                    printf("#ERR4-400\n");
                 }
                 break;

           case 2:
                 printf("\t#ERR4-401\n");
                 break;

            default:
                 printf("\t#RR4-402\n");
                 break;    

        }

    }


}