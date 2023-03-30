#include <stdio.h>
#include <math.h>
#include <locale.h>
int main (){
setlocale (LC_ALL, "portuguese");

float metros;

printf ("Converter metros para centímetros\n\n");

printf ("Insira a medida em metros: ");
scanf ("%f", &metros);

printf ("Medida em centímetros: %.f cm", metros * 100);


	

	
}
