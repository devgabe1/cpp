#include <stdio.h>
int main(){

int valor;

printf ("\nIdentificar faixa numérica.\n\n");

printf ("Insira um valor inteiro: ");
scanf ("%d", &valor);

if (valor <= 9 && valor >= 1){
    printf ("\nO valor está na faixa permitida.");
} else { printf ("\nO valor informado não pertence a faixa de 1 a 9.");
}
}