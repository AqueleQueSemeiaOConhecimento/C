#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome1[50];
    float peso;
    };

typedef struct pessoa pess;

int main(){
int i;
  
    pess pes[2];

  printf("Esse algorismo diz quem e a pessoa mais gorda:\n");
  printf("Insira 2 nomes:\n");

  for(i=0; i<2; i++){
      scanf("%50[^\n]s", &pes[i].nome1); 
      fflush(stdin); }

  printf("Insira os respectivos pesos em KG: \n");
  
   for(i=0; i<2; i++){
    scanf("%f", &pes[i].peso); }


    
    
    if((pes[0].peso) > (pes[1].peso)){
      printf("%s \n", pes[0].nome1);
    }
    else {
      printf("%s \n", pes[1].nome1);
      }

  







}