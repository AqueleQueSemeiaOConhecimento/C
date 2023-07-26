#include <stdio.h>
int main()
{
    int i;
    int idade[10];
    int opiniao[10];
    int op3 = 0;
    int op1 = 0;
    float op2 = 0;
    int idade3 = 0; 
    int media3 = 0;
    float media2 = 0;

//21) No dia da estreia do filme “Os Vingadores – O Ultimato”, um famoso instituto de pesquisa internacional
//realizou uma pesquisa logo após o encerramento do filme. Cada expectador respondeu a um questionário
//no qual constava sua idade, e a sua opinião em relação ao filme: excelente – 3; bom – 2; regular – 1.
//Elabore um algoritmo que receba a idade e a opinião de 10 expectadores, calcule e imprima:
//a. A média das idades das pessoas que responderam excelente;
//b. A quantidade de pessoas que responderam regular;
//c. O percentual de pessoas que responderam bom entre todos os expectadores analisados. 

    for(i = 0; i < 3; i++)
       {
        printf("\t---Notas pra o filme Os Vingadores--\n");
        printf("\t   Digite sua Idade:\n");
        scanf("%d.\n", &idade[i]);
        printf("\t   Digite sua opiniao a respeito do filme:\n");
        printf("\t   [3] Excelente.\n");
        printf("\t   [2] Bom.\n");
        printf("\t   [1] Regular.\n");
        scanf("%d.\n", &opiniao[i]);
       }
//a. A média das idades das pessoas que responderam excelente;
       for(i = 0; i < 10; i++)
           {
            if(opiniao[i] == 3)
               {
                op3++;
                idade3+= idade[i];
               }
           }

           media3 = idade3 / op3;
           
           printf("Media de idade das pessoas que responderam excelente:\n");
           printf("%d.\n", media3);

//b. A quantidade de pessoas que responderam regular;    
        for(i = 0; i < 10; i++)  
            {
            if(opiniao[i] == 1)
              {
                op1++;                
              }
            } 

            printf("Quantidade de pessoas que responderam regular: ");
            printf("%d.\n", op1);

//c. O percentual de pessoas que responderam bom entre todos os expectadores analisados.     
         for(i = 0; i < 10; i++)
            {
             if(opiniao[i] == 2)
             {
                op2++;
             }
            }

            media2 = (op2 / 10) * 100;
            printf("O percentual de pessoas que responderam bom entre todos e: %.2f\n", media2);
            printf(" %%");
            





}