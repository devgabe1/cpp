#include<stdio.h>
#include <math.h>

int main(){

float valor_a, valor_b, valor_c, delta, resultado_1, resultado_2, resultado_unico;

printf ("\nResolver equação de segundo grau\n\n");

printf ("Insira o valor de A: ");
scanf ("%f", &valor_a);

printf ("\nInsira o valor de B: ");
scanf ("%f", &valor_b);

printf ("\nInserir o valor de C: ");
scanf ("%f", &valor_c);


if (valor_a == 0 || valor_b == 0 || valor_c == 0 ){
    printf ("Essa equação não é de segundo grau.");
    return 1;
}

delta = pow(valor_b,2)- 4 *(valor_a * valor_c);
printf ("\n\nΔ = %.2f\n\n", delta);

if (delta < 0) {
    printf ("O delta é negativo. Equação não possui raízes reais.");
    return 0;
}

if (delta > 0) {
    resultado_1 = ( (valor_b * -1) + sqrt(delta) ) / (2 * valor_a);
    printf ("x1 = %.2f", resultado_1);

    resultado_2 = ((valor_b * -1) - sqrt(delta)) / (2 * valor_a);
    printf ("\nx2 = %.2f", resultado_2);
    return 0;
}

if (delta == 0) {
    resultado_unico = (valor_b * -1) / (2 * valor_a);
    printf ("\nx = %.2f", resultado_unico);
    return 0;
}
}