#include <stdio.h>

int main()
{
    char delegacoes[5][50];
    char nomeAtletas[5][10][100];
    float alturaAtleta[5][10];
    float alturaM = 0;
    int quantAtle = 10;
    int quantDeleg = 5;
    int i, j;


//4) Elabore um algoritmo que possa armazenar o código do atleta, a altura de dez atletas e a
//delegação que ele pertence. Existem cinco delegações diferentes, que participarão dos jogos. Ao
//final, imprimir os nomes dos atletas por delegação, e também o atleta com a maior altura de cada
//delegação. 

            for( i = 0; i < quantDeleg; i++)
            {
            printf("Informe o nome da Delegacao participando do evento: %d de %d\n", (i+1), quantDeleg);
            gets(delegacoes[i]);
            fflush(stdin);
                          
            for( j = 0; j < quantAtle; j++)
            {
            printf("Atleta de codigo %d de %d\n", (j+1), quantAtle);

            printf("Nome do Atleta:\n");
            gets(nomeAtletas[i][j]);
            fflush(stdin);

            printf("Altura do atleta:\n");
            scanf("%f.\n", &alturaAtleta[i][j]);
            fflush(stdin);

            }
           }

          printf("\t ---------\\------------\\--------------\\---------\n");    

             
            for( i = 0; i < quantDeleg; i++)
            {
            puts(delegacoes[i]);
            
            alturaM = 0;
             
            for(j=0; j < quantAtle; j++)
            {
                if(alturaAtleta[i][j] > alturaM) 
             {
                alturaM = alturaAtleta[i][j];
             }

              puts(nomeAtletas[i][j]);
              printf("%.2f.\n", alturaM);
            }
               
            printf("Maior altura: %.2f.\n", alturaM);

            printf("\t ---------\\------------\\--------------\\---------\n"); 
            
            }
}