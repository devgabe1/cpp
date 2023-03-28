#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

float valor, taxa, tempo;	

setlocale(LC_ALL,"portuguese");

printf ("Bem vindo ao calculador de prestações em atraso!");
printf ("\n\nInsira o valor original da fatura: ");
scanf ("%f", &valor);

printf ("\nInsira o valor da taxa por dia: ");
scanf ("%f", &taxa);

printf ("\nA fatura venceu faz quantos dias? ");
scanf ("%f", &tempo);

printf ("\nO valor da prestação é R$:");
printf ("%.2f",valor + ((taxa/100)* valor* tempo));

}
