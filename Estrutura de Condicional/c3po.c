#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

int i;
char s[15];
char a[15];
int c;

setlocale(LC_ALL, "Portuguese");

printf("Escreva o nome Matheus\n");

fgets(s, 15, stdin);
fflush(stdin);
printf("Escreva novamente o nome Matheus\n");
fgets(a, 15, stdin);
fflush(stdin);

c = strcmp (s, a);

if(c==0)
{
printf("textos iguais.\n"); }

else printf("textos diferentes.\n");

return 0;




}