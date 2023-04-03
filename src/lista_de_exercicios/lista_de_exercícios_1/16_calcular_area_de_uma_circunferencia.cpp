#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");

float raio;

printf ("Calcular a área de uma circunferência\n\n");

printf ("Insira o Raio da circunferência: ");
scanf ("%f", &raio);

printf ("\nA área da circunferência é igual a: %.2f", 3.14159 * pow(raio,2));

	
}
