#include <stdio.h>
int main(){

int valor;

printf ("\nIdentificar faixa numérica usando somente o operador lógico não.\n\n");

printf ("\nInsira um valor inteiro:");
scanf ("%d", &valor);

if (!(valor > 3)){
    printf ("\nO valor %d está na faixa numérica.", valor);
} else {printf ("\nO valor %d não está na faixa numérica.", valor);
}
}