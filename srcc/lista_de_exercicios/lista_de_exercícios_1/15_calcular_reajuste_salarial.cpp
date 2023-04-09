#include <stdio.h>
#include <math.h>
#include <locale.h>
int main (){
setlocale (LC_ALL, "portuguese");

float salario, reajuste;

printf ("Calcular reajuste salarial\n\n\n");

printf ("Insira o valor do salário atual R$:");
scanf ("%f", &salario);

printf ("Insira o percentual do reajuste:");
scanf ("%f", &reajuste);

printf ("\n\nO valor do salário será igual a R$:%.2f", salario * reajuste);


}
