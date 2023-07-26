#include <stdio.h>

int main(){

float s1, a1;

printf("Esse algoritmo da um aumento de 30%% no salario de funcionarios que recebem ate 1500 reais.\n");
printf("Escreva o valor do seu salario:\n");
scanf("%f.\n", &s1);

if(s1 <= 1500) {
    a1 = s1 * 1.3;
    printf("Seu salario passa a ser: %.2f.\n", a1);

}

else {
    printf("Seu salario continua igual.\n");
}



}