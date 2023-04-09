#include <stdio.h>
#include <math.h>
int main (){

float valor_a, valor_b, valor_c, valor_temporario;

printf ("\nDispor valores em ordem crescente.\n\n");

printf ("Insira o valor de A: ");
scanf ("%f", &valor_a);

printf ("Insira o valor de B: ");
scanf ("%f", &valor_b);

printf ("Insira o valor de C: ");
scanf ("%f", &valor_c);


if (valor_a > valor_b){
    valor_temporario = valor_a;
    valor_a = valor_b;
    valor_b = valor_temporario;
}

if (valor_a > valor_c){
    valor_temporario = valor_a;
    valor_a = valor_c;
    valor_c = valor_temporario;
}

if (valor_b > valor_c){
    valor_c = valor_temporario;
    valor_c = valor_b;
    valor_b = valor_temporario;
}

printf ("A: %.2f B: %.2f C: %.2f", valor_a, valor_b, valor_c);
return 0;



}