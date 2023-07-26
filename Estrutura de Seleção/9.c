#include <stdio.h>



int main(){

int a, b, c, d;

    printf("Esse algoritmo le ate 4 numeros em ordem crescente e descrescente:\n");
    printf("Digite um numero:\n");
    scanf("%d.\n", &a);
    fflush(stdin);
    printf("Digite um numero:\n");
    scanf("%d.\n", &b);
    fflush(stdin);
    printf("Digite um numero:\n");
    scanf("%d.\n", &c);
    fflush(stdin);
    printf("Digite um numero:\n");
    scanf("%d.\n", &d);
    fflush(stdin);
    printf("----------------------------");

    
     if((a < b) and (b > c))
    { 
        printf("\n%d.\n", a);
        printf("%d.\n", c);
        printf("%d.\n", b);
        printf("%d.\n", d);
    
    } 

    

    if((a < b) and (c > b))
    { 
        printf("\n%d.\n", a);
        printf("%d.\n", b);
        printf("%d.\n", c);
        printf("%d.\n", d);
    
    } 


    
    if((c < b) and (a > b))
    { 
        printf("\n%d.\n", c);
        printf("%d.\n", b);
        printf("%d.\n", a);
        printf("%d.\n", d);
    
    } 

    

    if((c < b) and (b > a))
    { 
        printf("\n%d.\n", c);
        printf("%d.\n", a);
        printf("%d.\n", b);
        printf("%d.\n", d);
    
    } 

    

    if((b < a) and (c > a))
    { 
        printf("\n%d.\n", b);
        printf("%d.\n", a);
        printf("%d.\n", c);
        printf("%d.\n", d);
    
    } 
    
    

    if((b < a) and (a > c))
    { 
        printf("\n%d.\n", b);
        printf("%d.\n", c);
        printf("%d.\n", a);
        printf("%d.\n", d);
    
    } 



}

