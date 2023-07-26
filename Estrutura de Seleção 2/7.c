#include <stdio.h>

int main()
{
   int hora1, hora2, totalh;


//7. Escrever um algoritmo que lê a hora de início de um jogo e a hora do final do jogo
//(considerando apenas horas inteiras) e calcula a duração do jogo em horas, sabendo-se que
//o tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e
//terminar no dia seguinte. Deve-se considerar as horas de 1 a 24.

       printf("Digite a hora de inicio:\n");
       scanf("%d.\n", &hora1);
       fflush(stdin);
       printf("Digite a hora do termino:\n");
       scanf("%d.\n", &hora2);
       fflush(stdin);


            if(hora2 < hora1)
            {
                totalh = (24-hora1) + hora2;
                printf("Total de horas jogadas: %d.\n", totalh);
            }

            else if(hora2 > hora1)
            {
                totalh = hora2 - hora1;
                printf("Total de horas jogadas: %d.\n", totalh);
            }

            else
            {
                printf("Ele jogou 24 horas.");
            }
        
            
             


}