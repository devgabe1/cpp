#include <stdio.h>
#include <math.h>
#include <locale.h>
int main (){
setlocale(LC_ALL, "portuguese");

float km;

printf ("Converter quil�metros para metros\n\n");

printf ("Insira o valor em quil�metros: ");
scanf ("%f", &km);

printf ("Valor em metros: %.fm", km * 1000);

	
}
