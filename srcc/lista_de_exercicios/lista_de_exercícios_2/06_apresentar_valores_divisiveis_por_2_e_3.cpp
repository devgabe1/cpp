#include <stdio.h>
#include <math.h>
int main (){

int valor_a, valor_b, valor_c, valor_d;

printf ("\nApresentar valores divisíveis por 2 e 3\n\n");

printf ("Insira o valor A: ");
scanf ("%d", &valor_a);

printf ("Insira o valor B: ");
scanf ("%d", &valor_b);

printf ("Insira o valor C: ");
scanf ("%d", &valor_c);

printf ("Insira o valor D: ");
scanf ("%d", &valor_d);

if (valor_a % 2 == 0 && valor_a % 3 == 0){
    printf ("\nO valor A é divisível por 2 e 3.\n");
}

if (valor_b % 2 == 0 && valor_b % 3 == 0){
    printf ("\nO valor B é divisível por 2 e 3.\n");
}

if (valor_c % 2 == 0 && valor_c % 3 == 0){
    printf ("\nO valor C é divisível por 2 e 3.\n");
}

if (valor_d % 2 == 0 && valor_d % 3 == 0){
    printf ("\nO valor D é divisível por 2 e 3.\n");
}
}