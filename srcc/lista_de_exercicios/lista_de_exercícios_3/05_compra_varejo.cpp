#include <stdio.h>
int main (){

int quantidade;
float total;

printf ("\nCalculo compra de maçãs.\n\n");

printf ("Insira a quantidade: ");
scanf ("%d", &quantidade);

if (quantidade < 12){
    total = quantidade * 1.3;
} else {
    total = quantidade * 1;
}

printf ("\n\nO valor total da compra é R$: %.2f\n", total);
}