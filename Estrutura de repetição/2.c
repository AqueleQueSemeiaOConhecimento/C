#include <stdio.h>
int main()
{
float num[4];
int i;
float media;

//2) Elabore um algoritmo que leia quatro números, usando uma estrutura de repetição, e ao final, imprima a
//média desses números. 

    for(i=0; i<4; i++)
    {
        printf("Digite um numero: \n");
        scanf("%f.\n", &num[i]);
        fflush(stdin);
    }

    media = (num[0] + num[1] + num[2] + num[3]) / 4;

    printf("Media: %.2f.\n", media);




}