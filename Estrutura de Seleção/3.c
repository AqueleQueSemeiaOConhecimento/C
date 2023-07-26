#include <stdio.h>
#include <locale.h>
int main () {

int n1, n2;

  setlocale (LC_ALL, "portuguese");

    printf("Esse algoritmo pega 2 numeros e diz qual o maior e menor:\n");
    printf("Insira o primeiro número:\n");
    scanf("%d.\n", &n1);
    printf("Insira o segundo número:\n");
    scanf("%d.\n", &n2);

    if(n1 >= n2){
        printf("Maior: %d.\n", n1);

    }

    else {
        printf("Menor: %d.\n", n1);

    }

    if (n2 >= n1){
        printf("Maior: %d.\n", n2);
    

    }
    else {      printf("Menor: %d.\n", n2);
    }





}