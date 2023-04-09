#include <stdio.h>
int main(){
    
int codigo;
float sal_atual, sal_novo;

printf ("\nCalcular aumento com base no cargo.\n\n");

printf ("-------------------------\n");
printf ("|  Código  |   Cargo    |\n");
printf ("-------------------------\n");
printf ("|   101    |  Gerente   |\n");
printf ("|   102    | Engenheiro |\n");
printf ("|   103    |  Técnico   |\n");
printf ("|-----------------------|\n");

printf ("\nInsira o código do seu cargo: ");
scanf ("%d", &codigo);

printf ("Insira o valor do salário atual R$: ");
scanf ("%f", &sal_atual);

switch (codigo)
{
case 101:
    sal_novo = sal_atual * 1.1;
    break;
case 102:
    sal_novo = sal_atual * 1.2;
    break;
case 103:
    sal_novo = sal_atual * 1.3;
    break;
default:
    sal_novo = sal_atual * 1.4;
    break;
}
printf ("\nSalário atual R$: %.2f\nSalário com aumento R$: %.2f\nIsso significa um aumento de R$: %.2f\n", sal_atual, sal_novo, sal_novo - sal_atual);
}