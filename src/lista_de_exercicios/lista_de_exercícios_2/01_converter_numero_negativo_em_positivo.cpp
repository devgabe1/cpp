#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale (LC_ALL, "portuguese");

float numero;

printf ("\nConversor de N�meros negativos para positivos\n\n");

printf ("Insira o N�mero:");
scanf ("%f", &numero);

if (numero < 0 ){

printf ("N�mero Convertido: %2.f", numero * (-1));

}

else {
 printf ("N�mero Convertido: %2.f", numero);

}



}
