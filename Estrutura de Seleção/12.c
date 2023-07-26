#include <stdio.h>



int main ()
{
 
 int num[2];
 int i;

 printf("Digite 2 numeros e direi se a divisao e exata ou nao:\n");

 
 printf("Digite os numero:\n");

 for(i=0; i<2; i++)
 {
    scanf("%d.\n", &num[i]);
 }
 
 

 for (i=0; i < 2; i++)
 {
    printf("%d.\n", num[i]);
 }

 if( num[0] % num[1] == 0)
 {
    printf(" A divisao de (n1) por n(2) e exata.\n");
 }
 
  else 
  {
    printf("A divisao de (n1) por n(2) nao e exata.\n");

  }



}