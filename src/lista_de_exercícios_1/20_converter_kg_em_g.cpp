#include <stdio.h>
#include <math.h>
#include <locale.h>
int main( ){
setlocale(LC_ALL, "portuguese");

float kg;

printf ("Converter Quilograma em gramas\n\n");

printf ("Insira a quantidade em Kg: ");
scanf ("%f", &kg);

printf ("Quantidade convertida: %.fg", kg * 1000);
	
	
	
}
