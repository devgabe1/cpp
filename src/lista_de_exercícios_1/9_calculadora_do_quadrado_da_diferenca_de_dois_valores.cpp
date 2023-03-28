#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");

float valor_a, valor_b, diferenca;

printf ("Calculadora do quadrado da diferença de dois valores\n\n");

printf ("Insira o Valor A:");
scanf ("%f", &valor_a);

printf ("Insira o Valor B:");
scanf ("%f", &valor_b);

diferenca = ("f%", valor_a - valor_b);
printf ("\nDiferença:%.1f", diferenca);
printf ("\nQuadrado da diferença:%.1f", pow(diferenca, 2));
}	
