#include <stdio.h>
float goku (float i);
int main() {

float s, d;

    printf("Veja o valor do credito disponivel para voce com sabe no saldo medio:\n");
    printf("Insira o valor do seu saldo medio:\n");
    scanf("%f.\n", &s);
    d = goku(s);



}


float goku (float i)  {
if(i >= 4000) {

printf("Valor do saldo: %.2f.\n", i);
   i = i * 0.3; 
   printf("Valor do credito: %.2f", i);
   
   return i; }


   
   if(i >= 3000 < 3999.99) {

printf("Valor do saldo: %.2f.\n", i);
   i = i * 0.25; 
   printf("Valor do credito: %.2f", i);
   


   return i; }


   if(i >= 2000 < 2999.99) {

printf("Valor do saldo: %.2f.\n", i);
   i = i * 0.2; 
   printf("Valor do credito: %.2f", i);
   
   return i; }

    if(i <= 1999,99) {

printf("Valor do saldo: %.2f.\n", i);
   i = i * 0.1; 
   printf("Valor do credito: %.2f", i);
   
   return i; }



}
