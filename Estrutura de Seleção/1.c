#include <stdio.h>

int main() {

float d, m;

printf("Digite um numero, se ele for maior que 20, metade dele sera impresso:\n");
scanf("%f.\n", &d);

if(d >= 20)
{
m = d / 2;

printf("%.2f.\n", m);

}
else {

printf("%.2f.\n", d);
}




}