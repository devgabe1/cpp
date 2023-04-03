#include <stdio.h>
#include <math.h>
#include <locale.h>
int main (){
setlocale (LC_ALL, "portuguese");

float valor_a, valor_b, valor_c, soma;

printf ("Calcular o quadrado da soma de três valores\n\n\n");

printf ("Insira o valor A: ");
scanf ("%f", &valor_a);

printf ("Insira o valor B: ");
scanf ("%f", &valor_b);

printf ("Insira o valor C: ");
scanf ("%f", &valor_c);

soma = valor_a + valor_b + valor_c;

printf ("\n\nO quadrado da soma dos três valores é igual a: %.2f", pow(soma, 2));
	
	
}
