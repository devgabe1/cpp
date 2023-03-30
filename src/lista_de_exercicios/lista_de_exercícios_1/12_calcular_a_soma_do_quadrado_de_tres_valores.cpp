#include <stdio.h>
#include <math.h>
#include <locale.h>
int main (){
setlocale (LC_ALL, "portuguese");

float valor_a, valor_b, valor_c;

printf ("Calcular a soma do quadrado de três valores\n\n");

printf ("Insira o Valor A: ");
scanf ("%f", &valor_a);

printf ("Insira o Valor B: ");
scanf ("%f", &valor_b);

printf ("Insira o Valor C: ");
scanf ("%f", &valor_c);

printf ("\n\nA soma do quadrado dos valores é igual a: %.2f", pow(valor_a, 2) + pow(valor_b, 2) + pow(valor_c, 2));


}
