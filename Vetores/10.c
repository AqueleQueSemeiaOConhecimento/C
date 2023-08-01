#include <stdio.h>

      int main()

{
      int logica[15] = {2513, 2134, 5412, 4217, 2121, 3749, 4012, 5122, 2387, 3888, 3122, 5551, 5432, 2122, 2098};
      int linguagem[10] = {3444, 2121, 4331, 2387, 5551, 4335, 2766, 2098, 4775, 3749};
      int i, j;

//10) Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e
//Linguagem e Programação.
//Os vetores com os códigos dos alunos que cursam as disciplinas segue abaixo.
//Lógica={2513, 2134, 5412, 4217, 2121, 3749, 4012, 5122, 2387, 3888, 3122, 5551, 5432, 2122, 2098}
//Linguagem de programação= {3444, 2121, 4331, 2387, 5551, 4335, 2766, 2098, 4775, 3749}
//Mostre o número das matriculas que aparecem nos dois vetores. 

    printf("Alunos matriculados em logica e linguagem de programacao:\n");
    for( i = 0; i < 15; i++)
    {
        for( j = 0; j < 10; j++)
        {
            if(logica[i] == linguagem[j])
            {
            printf("Aluno de matriculo %d, esta matriculado nas duas disciplinas.\n", logica[i]);
            }

            else
            {
                
            }
        }
    }




    
}