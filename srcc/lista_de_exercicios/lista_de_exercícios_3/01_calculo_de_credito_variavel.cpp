#include <stdio.h>
int main (){

float saldo_medio, valor_credito;

printf ("\n\nCalcular crédito especial com base no saldo médio\n\n");

printf ("Insira seu saldo médio do ano anterior R$: ");
scanf ("%f", &saldo_medio);

// Não é possível usar a função Switch pois se trata de uma varíavel float //

if (saldo_medio <= 200){
    printf ("\nInfelizmente o usuário não possui crédito disponível.\n");
}
if (saldo_medio >= 201 && saldo_medio <= 400){
    valor_credito = (saldo_medio * 0.2);
    printf ("\nSaldo médio: %.2f\nValor do crédito disponível: %.2f", saldo_medio, valor_credito);
}
if (saldo_medio >= 401 && saldo_medio <= 600){
    valor_credito = (saldo_medio * 0.3);
    printf ("\nSaldo médio: %.2f\nValor do crédito disponível: %.2f", saldo_medio, valor_credito);
}
if (saldo_medio >= 601){
    valor_credito = saldo_medio * 0.4;
    printf ("\nSaldo médio: %.2f\nValor do c´redito disponível: %.2f", saldo_medio, valor_credito);
}
}