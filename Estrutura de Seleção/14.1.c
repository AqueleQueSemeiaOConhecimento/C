#include <stdio.h>
#include <string.h>

int main()
{

char sexo[5][50]= {"Masculino", "masculino", "Feminino", "feminino"};
char sexo2[50];
float h, p, c;
int i;
int g = 1;

    printf("Ola, gostaria de saber seu peso ideal?\n");
    printf("Ok ><\n");
    printf("Vamos la...\n");

    printf("----------------------------\n");
    printf("Insira o seu sexo:\n");
    scanf("%50[^\n]s", &sexo2);
    



for(i=0; i<4; i++)
{
     g = strcmp(sexo[i], sexo2);

         if(g == 0)
    break; }
    
    
    

 
    switch (i) { 
    
        case 0:
        printf("Sexo confirmado, Masculino.\n");
        printf("Insira sua altura em metros:\n");
        scanf("%f", &h);
        printf("Insira o seu peso em kg:\n");
        scanf("%f.\n", &p);
        printf("--------------\n");
        printf("Seu peso ideal é de: \n");

        c = (h * p) - 58;
        printf("%.2f", c); 
        break;

         case 1:
        printf("Sexo confirmado, Masculino.\n");
        printf("Insira sua altura em metros:\n");
        scanf("%f", &h);
        printf("Insira o seu peso em kg:\n");
        scanf("%f.\n", &p);
        printf("--------------\n");
        printf("Seu peso ideal é de: \n");

        c = (h * p) - 58;
        printf("%.2f", c); 
        break;

       
        case 2:
        printf("Sexo confirmado, Feminino.\n");
        printf("Insira sua altura em metros:\n");
        scanf("%f", &h);
        printf("Insira o seu peso em kg:\n");
        scanf("%f.\n", &p);
        printf("--------------\n");
        printf("Seu peso ideal é de: \n");
        c = (h * p) - 44.7;
        printf("%.2f", c);

        break;

        case 3:
        printf("Sexo confirmado, Feminino.\n");
        printf("Insira sua altura em metros:\n");
        scanf("%f", &h);
        printf("Insira o seu peso em kg:\n");
        scanf("%f.\n", &p);
        printf("--------------\n");
        printf("Seu peso ideal é de: \n");

        c = (h * p) - 44.7;
        printf("%.2f", c);
        break;

        default:
        printf("Genero nao listado.");
        break;  }
     }