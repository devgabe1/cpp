#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale (LC_ALL, "portuguese");

float seg;

printf ("Converter segundos em horas\n\n");

printf ("Insira o tempo em Segundos: ");
scanf ("%f", &seg);

printf ("Tempo convertido em horas: %.fh", (seg / 60) / 60); 


	
	
}
