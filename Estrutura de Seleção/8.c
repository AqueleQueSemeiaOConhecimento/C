#include <stdio.h>
float pcarro (float i);


int main(){

float p, d;

printf("Digite o preço de fabrica do carro:\n");
scanf("%f.\n", &p);
d = pcarro(p);





}


float pcarro (float i){
   if(i <= 15000){
   i = i * 0.05;
   printf("%.2f.\n", i);

   return i; }

   if(i >= 15000 <= 25000) {
   i = (i * 0.1) + (i * 0.15);
   printf("%.2f.\n", i);

   return i; }

   if(i >= 25000) {
   i = (i * 0.15) + (i * 0.2);
   printf("%.2f.\n", i);

   return i; } 
}

