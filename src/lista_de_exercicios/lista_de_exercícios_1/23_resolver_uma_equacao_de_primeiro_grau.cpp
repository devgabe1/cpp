#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale (LC_ALL, "portuguese");

float a, b, x;

printf ("Resolver uma equa��o de primeiro grau.\n\n");

printf ("Insira o valor do coeficiente angular: ");
scanf ("%f", &a);

printf ("Insira o valor da constante: ");
scanf ("%f", &b);


if (a == 0){
	if (b == 0) {
		printf("Qualquer valor para x � a solu��o."); }
	 else printf ("N�o h� solu��o para a equa��o"); }
	 else {
	 x = -b / a;
	 printf ("O valor de x � igual a = %.2f", x); }
	 
}
	
	

	



