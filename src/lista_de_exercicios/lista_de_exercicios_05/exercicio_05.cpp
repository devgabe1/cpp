#include<stdio.h>
int main(){

float valor[10], variavel, valor_f[10];

printf ("Multiplicar um Vetor por uma variável.\n\n");

for (int i = 0; i <= 9; i++){
    printf ("Insira um valor: ");
    scanf ("%f", &valor[i]);
}

printf ("\nInsira a variável a ser multiplicada: ");
scanf ("%f", &variavel);

for (int i = 0; i <= 9; i++){
    valor_f[i] = valor[i] * variavel;
}

printf ("Valores multiplicados:\n ");

for (int i = 0; i <= 9; i++){
    printf("%.f\n", valor_f[i]);
}
}