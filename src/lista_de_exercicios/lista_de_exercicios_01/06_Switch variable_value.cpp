#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
float variavel_a, variavel_b, variavel_c;

setlocale (LC_ALL, "portuguese");

printf ("Switch variable value\n\n");

printf ("Insira o valor da Variável A:");
scanf ("%f", &variavel_a);

printf ("Insira o valor da Variável B:");
scanf ("%f", &variavel_b);

variavel_c = variavel_a;
variavel_a = variavel_b;
variavel_b = variavel_c;

printf ("\n\nVariável A:%.f", variavel_a);
printf ("\nVariável B:%.f", variavel_b);

}
