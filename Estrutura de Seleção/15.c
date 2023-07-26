#include <stdio.h>
     int main()
{
    int ladoA, ladoB, ladoC;


    printf("Esse algoritmo le 3 valores e diz o tipo de triangulo que e:\n");
    printf("Digite o valor do lado A:\n");
    scanf("%d.\n", &ladoA);
    fflush(stdin);
    printf("Digite o valor do lado B:\n");
    scanf("%d.\n", &ladoB); 
    fflush(stdin);
    printf("Digite o valor do lado C:\n");
    scanf("%d.\n", &ladoC);
    fflush(stdin);
    

     if( (ladoA == ladoB) &&  (ladoA == ladoC) ) 
{
    printf("Triangulo Equilatero.\n");
}    

     if( (ladoA == ladoB) && (ladoB != ladoC)) 
{
    printf("Triangulo Isosceles.\n");
}    
 
     else if(( ladoA == ladoC) && (ladoA != ladoB))
{
    printf("Triangulo Isosceles.\n");
}    
     else if ( (ladoB == ladoC) && (ladoB != ladoA)) 
{
    printf("Triangulo Isosceles.\n");
}    
     if ( (ladoA != ladoB) && (ladoB && ladoC) && (ladoA != ladoC))
{
    printf("Tringulo Escaleno.\n");
}     


}