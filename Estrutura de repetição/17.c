#include <stdio.h>

int main()
{
    int i;
    float num = 0;
    int nume[20];
    float soma = 0;
    float media = 0;
    float maior, menor;
    float impar = 0;

//17) Elabore um algoritmo que leia um número de entrada que indicará a quantidade de números a serem
//lidos. Em seguida, calcule e mostre:
//a. A soma dos números informados;
//b. A quantidade de números informados;
//c. A média dos números informados;
//d. O maior número informado;
//e. O menor número informado;
//f. O percentual dos números ímpares entre todos os números informados
        
        printf("Informe quantos numeros deseja inserir:\n");
        scanf("%f.\n", &num);

        for(i=0; i<num; i++)
        {
            printf("Digite um numero\n");
            scanf("%d.\n", &nume[i]);
            fflush(stdin);
        }

        for(i=0; i<num; i++)
        {
            soma += nume[i];
        }
        printf("Soma dos numeros informados: %.2f.\n", soma);
        printf("Os numeros informados em total sao: %.1f.\n", num);

        media = soma / num;

        printf("Media dos numeros informados: %.2f.\n", media);

       //MAIOR;

       maior = nume[0];

       for( i=0; i< num; i++)
         {
            if(nume[i] > maior) maior = nume[i];
              
         }
        
        printf("Maior: %.2f\n", maior);



        //MENOR;

       menor = nume[0];

       for( i=0; i< num; i++)
         {
            if(nume[i] < menor) menor = nume[i];
              
         }
        

        //% de numero impar
        printf("Menor: %.2f\n", menor);

        for(i=0; i<num; i++)
        {
            if(nume[i] %2 != 0) 
            {
                impar++;
            }    
        }

        impar = (impar / num) * 100;

        printf(" Percentual de numero impares: %.2f", impar);
        printf(" %%");
        

        

       

        





}