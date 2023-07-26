#include <stdio.h>
int main()
{
  
   int num;


    printf("Esse algoritmo informa se o numero e divisivel por 10, 5 e por 2 ao mesmo tempo.");
    
    
        printf("Insira um valor numerico:");
        scanf("%d\n", &num);
    

        if ((num % 10 == 0) && (num % 5 == 0) && (num % 2 == 0) )
        {
            printf("Esse numero e divisivel por 10, 5 e 2 ao mesmo tempo!.\n");
        }
        else
        {
            printf("Esse numero nao e divisivel por 10, 5 e 2 ao mesmo tempo!.\n");
        }
    }
    






