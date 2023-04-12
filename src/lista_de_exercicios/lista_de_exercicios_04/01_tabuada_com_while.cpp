#include<stdio.h>
#include<locale.h>
int main(){

float numero, multiplicador = 0;

setlocale (LC_ALL, "portuguese");

printf ("\nApresentar tabuada.\n\n");

printf ("Insira um número para ser apresentada sua tabuada: ");
scanf ("%f", &numero);
while (multiplicador <= 10){
printf ("%.f x %.f = %.f\n", numero, multiplicador, numero * multiplicador);
multiplicador += 1; //variações: multiplicador ++; multiplicador = multiplicador + 1;
}

}