#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");

float valor_a, valor_b, diferenca;

printf ("Calculadora do quadrado da diferen�a de dois valores\n\n");

printf ("Insira o Valor A:");
scanf ("%f", &valor_a);

printf ("Insira o Valor B:");
scanf ("%f", &valor_b);

diferenca = ("f%", valor_a - valor_b);
printf ("\nDiferen�a:%.1f", diferenca);
printf ("\nQuadrado da diferen�a:%.1f", pow(diferenca, diferenca));
}	
