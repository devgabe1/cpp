#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){

setlocale(LC_ALL,"portuguese");
float valor;

printf ("Calculo do quadrado de um valor\n\n");

printf ("Insira o valor: ");
scanf ("%f", &valor);
printf ("%.2f", pow(valor, 2));


	
	
}
