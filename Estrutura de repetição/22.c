#include <stdio.h>
int main()
{
    int i;
    int num;
    
//22) Elabore um algoritmo que imprima a tabuada de 1 a 10. 

        for( i = 1; i < 11; i++)
          {
            printf("Digite um numero que direi a tubuada do mesmo ate 10.\n");
            scanf("%d.\n", &num);

            num = num * 1;
            printf("\t %d.\n", num);

        
            num = num * 2;
            printf("\t %d.\n", num);
           
            num = num / 2;
            num = num * 3;
            printf("\t %d.\n", num);
 
            num = num / 3;
            num = num * 4;
            printf("\t %d.\n", num);
 
            num = num / 4;
            num = num * 5;
            printf("\t %d.\n", num);

            num = num / 5;
            num = num * 6;
            printf("\t %d.\n", num);

            num = num / 6;
            num = num * 7;
            printf("\t %d.\n", num);

            num = num / 7;
            num = num * 8;
            printf("\t %d.\n", num);

            num = num / 8;
            num = num * 9;
            printf("\t %d.\n", num);

            num = num / 9;
            num = num * 10;
            printf("\t %d.\n", num);
          }





    
}