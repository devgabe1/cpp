#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "portuguese");

float comprimento, altura, largura;

printf ("Bem vindo a Calculadora de Volume de caixas retângulares!\n\n");

printf ("Insira o comprimento da caixa em centímetros:");
scanf ("%f", &comprimento);

printf ("Insira a altura da caixa em centímetros:");
scanf ("%f", &altura);

printf ("Insira a largura da caixa em centímetros:");
scanf ("%f", &largura);

printf ("\n\nA sua caixa retângular tem um Volume de: %.fcm", comprimento * altura * largura);
}
