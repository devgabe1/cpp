#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale (LC_ALL, "portuguese");

float a, b, x;

printf ("Resolver uma equação de primeiro grau.\n\n");

printf ("Insira o valor do coeficiente angular: ");
scanf ("%f", &a);

printf ("Insira o valor da constante: ");
scanf ("%f", &b);


if (a == 0){
	if (b == 0) {
		printf("Qualquer valor para x é a solução."); }
	 else printf ("Não há solução para a equação"); }
	 else {
	 x = -b / a;
	 printf ("O valor de x é igual a = %.2f", x); }
	 
}
	
	

	



