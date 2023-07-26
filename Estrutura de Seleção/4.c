#include <stdio.h>

int main (){

    int n1, n2, n3;

    printf("Esse algorito pega 3 numeros e diz qual o menor:\n");

    printf("Insira o primeiro numero:\n");
    scanf("%d.\n", &n1);

    printf("Insira o segundo numero:\n");
    scanf("%d.\n", &n2);

    printf("Insira o terceiro numero:\n");
    scanf("%d.\n", &n3);

    if(n1 < n2) {

       if(n1 < n3) {
        printf("O menor numero e: %d.\n", n1);
       }

    }

    if(n2 < n1) {

       if(n2 < n3) {
        printf("O menor numero e: %d.\n", n2);

    } }

    if(n3 < n1) {

       if(n3 < n2) {
        printf("O menor numero e: %d.\n", n3);
       }

    }

 }