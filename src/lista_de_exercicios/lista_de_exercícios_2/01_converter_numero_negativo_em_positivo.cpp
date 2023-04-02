#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale (LC_ALL, "portuguese");

float numero;

printf ("\nConversor de Números negativos para positivos\n\n");

printf ("Insira o Número:");
scanf ("%f", &numero);

if (numero < 0 ){

printf ("Número Convertido: %2.f", numero * (-1));

}

else {
 printf ("Número Convertido: %2.f", numero);

}



}
