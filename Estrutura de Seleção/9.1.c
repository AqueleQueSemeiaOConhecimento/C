#include <stdio.h>

int main() {
    int a, b, c;

    printf("Esse algoritmo lê até 4 números em ordem crescente e decrescente:\n");
    
    printf("Digite um número:\n");
    scanf("%d", &a);
    
    printf("Digite um número:\n");
    scanf("%d", &b);
    
    printf("Digite um número:\n");
    scanf("%d", &c);

    
    

    printf("----------------------------\n");

    int min, max;
    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
   
    


    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
  

    
    
    

    printf("Ordem crescente:\n");
    printf("%d\n", min);
    if (a != min && a != max) printf("%d\n", a);
    if (b != min && b != max) printf("%d\n", b);
    if (c != min && c != max) printf("%d\n", c);
    printf("%d\n", max);

    printf("Ordem decrescente:\n");
    printf("%d\n", max);
    if (c != min && c != max) printf("%d\n", c);
    if (b != min && b != max) printf("%d\n", b);
    if (a != min && a != max) printf("%d\n", a);
    printf("%d\n", min);

    return 0;
}