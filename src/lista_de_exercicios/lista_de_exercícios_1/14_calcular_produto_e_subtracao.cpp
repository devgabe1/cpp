#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale (LC_ALL, "portuguese");

float valor_a, valor_b, valor_c, valor_d;

printf ("Calcular o produto de A e C e a subtração de B e D\n\n\n");

printf ("Insira o valor de A: ");
scanf ("%f", &valor_a);

printf ("Insira o valor de B: ");
scanf("%f", &valor_b);

printf ("Insira o valor de C: ");
scanf ("%f", &valor_c);

printf ("Insira o valor de D: ");
scanf ("%f", &valor_d);

printf ("\n\nO produto de A e C é igual a: %.2f", valor_a * valor_c);
printf ("\nA subtração de B e D é igual a %.2f", valor_b - valor_d);
	
	
}
