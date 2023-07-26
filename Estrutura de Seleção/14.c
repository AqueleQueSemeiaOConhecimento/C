#include <stdio.h>
#include <string.h>

int main()
{
    char m[50] = {"Masculino"};
    char s[50];
    int a;
    float h, p, c;

    printf("Ola, gostaria de saber seu peso ideal?\n");
    printf("Ok ><\n");
    printf("Vamos la...\n");

    printf("----------------------------\n");
    printf("Insira o seu sexo:\n");
    gets(s);
    
    a = strcmp(m, s);

    if(a == 0) 
    {
        printf("Sexo confirmado, Masculino.\n");
        printf("Insira sua altura em metros:\n");
        scanf("%f", &h);
        printf("Insira o seu peso em kg:\n");
        scanf("%f.\n", &p);
        printf("--------------\n");
        printf("Seu peso ideal é de: \n");

        c = (h * p) - 58;
        printf("%.2f", c);

    }

    else 
    {   printf("Sexo confirmado, Feminino.\n");
        printf("Insira sua altura em metros:\n");
        scanf("%f", &h);
        printf("Insira o seu peso em kg:\n");
        scanf("%f.\n", &p);
        printf("--------------\n");
        printf("Seu peso ideal é de: \n");

        c = (h * p) - 44,7;
        printf("%.2f", c);
    }    

 


}    

