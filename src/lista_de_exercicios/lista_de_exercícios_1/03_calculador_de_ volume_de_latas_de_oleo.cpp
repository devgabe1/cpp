#include<stdio.h>
#include <locale.h>
#include <Math.h>

int main(){

setlocale(LC_ALL,"portuguese");

float raio, altura, volume;

printf ("Bem vindo ao calculador de volume de latas de óleo!\n");	
printf ("Digite o raio da sua lata de óleo:");
scanf ("%f", &raio);

printf ("Digite a alutra da sua lata de óleo:");
scanf ("%f", &altura);

volume = 3.14 * pow(raio,2) * altura;

printf ("De acordo com meus óleos sua lata de óleo mede: ");
printf ("%.2f", volume);
printf (" cm (se for metros procure ajuda imediatamente)");


}
