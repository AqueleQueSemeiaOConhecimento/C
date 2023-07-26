#include <stdio.h>

int main(){

int a, b, c, d;

printf("Digite 4  numeros:\n");
scanf("%d.\n", &a);
scanf("%d.\n", &b);
scanf("%d.\n", &c);
scanf("%d.\n", &d);


printf("Crescente:\n");

if((a < b) and (b > c)) {
printf("\n %d.\n %d.\n %d.\n %d.\n", a, c, b, d); }

else if ((a < b) and (c > b)) {
printf("\n %d.\n %d.\n %d.\n %d.\n", a, b, c, d); }
       
else if ((c < b) and (a < b)) {
printf("\n %d.\n %d.\n %d.\n %d.\n", c, a, b, d); }   
       
else if ((c < b) and (b < a)) {
printf("\n %d.\n %d.\n %d.\n %d.\n", c, b, a, d);}   
        
else if((b < a) and (c > a)){
printf("\n %d.\n %d.\n %d.\n %d.\n", b, a, c, d); }   
    
else if((b < a) and (a > c)) {
printf("\n %d.\n %d.\n %d.\n %d.\n", b, c, a, d);}


printf("Decrescente:\n");
    
    if((a > b) and (b > c)) {
printf("\n %d.\n %d.\n %d.\n %d.\n", a, c, b, d); }

else if ((a > c) and (c > b)) {
printf("\n %d.\n %d.\n %d.\n %d.\n", a, c, b, d); }
       
else if ((c > a) and (a > b)) {
printf("\n %d.\n %d.\n %d.\n %d.\n", c, a, b, d); }   
       
else if ((c > b) and (b > a)) {
printf("\n %d.\n %d.\n %d.\n %d.\n", c, b, a, d);}   
        
else if((b > c) and (c < a)){
printf("\n %d.\n %d.\n %d.\n %d.\n", b, a, c, d); }   
    
else if((b > a) and (a > c)) {
printf("\n %d.\n %d.\n %d.\n %d.\n", b, c, a, d);}


}
