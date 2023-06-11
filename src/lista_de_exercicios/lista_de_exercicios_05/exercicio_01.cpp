#include <stdio.h>

int main (){

float valor[10];

printf("Apresentar valores na ordem inversa.\n\n");

for (int i = 0; i < 10; i++)
{
    printf("Insira um Valor: ");
    scanf("%f", &valor[i]);
}

for (int i = 9; i >= 0; i--)
{
    printf("%.2f\n", valor[i]);
}
}