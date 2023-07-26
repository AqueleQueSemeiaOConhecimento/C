#include <stdio.h>
#include <string.h>



int main(){
char nome1[2][50];
int i;
float peso[2];

  printf("Esse algorismo diz quem e a pessoa mais gorda:\n");
  printf("Insira 2 nomes:\n");

  for(i=0; i<2; i++){
    gets(nome1[i]); }

  printf("Insira os respectivos pesos em KG: \n");
  
   for(i=0; i<2; i++){
    scanf("%f", &peso[i]); }


    
    
    if(peso[0] > peso[1]){
      printf("%s \n", nome1[0]);
    }
    else {
      printf("%s \n, nome[1]");
      }

  







}