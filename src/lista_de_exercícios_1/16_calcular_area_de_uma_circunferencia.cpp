#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");

float raio;

printf ("Calcular a �rea de uma circunfer�ncia\n\n");

printf ("Insira o Raio da circunfer�ncia: ");
scanf ("%f", &raio);

printf ("\nA �rea da circunfer�ncia � igual a: %.2f", 3.14159 * pow(raio,2));

	
}
