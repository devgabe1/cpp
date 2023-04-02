#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <math.h>	
#include <locale.h>
int main(){

setlocale(LC_NUMERIC, "");

setlocale (LC_ALL, "portuguese");

int  alunos_direito, alunos_engenharia, alunos_computacao, total_alunos;
float valor_engenharia, valor_direito, valor_computacao, total_valor, aa1;
char faculdade[50];

printf ("\nLevantamento arrecada��o e alunos de uma Faculdade\n\n\n");
printf ("Insira o nome da Faculdade: ");
fgets(faculdade, 50, stdin);



printf ("\nInsira o n�meros de alunos matr�culados no curso de Engenharia: ");
scanf ("%d", &alunos_engenharia);

printf ("\nInsira o valor da mensalidade do curso de Engenharia R$: ");
scanf ("%f", &valor_engenharia);


printf ("\nInsira o n�mero de alunos matr�culados no curso de Direito: ");
scanf ("%d", &alunos_direito);

printf ("\nInsira o valor da mensalidade do curso de Direito R$: ");
scanf ("%f", &valor_direito);


printf ("\nInsira o n�mero de alunos matr�culados no curso de Computa��o: ");
scanf ("%d", &alunos_computacao);

printf ("\nInsira o valor da mensalidade do curso de Computa��o R$: ");
scanf ("%f", &valor_computacao);

total_alunos = alunos_engenharia + alunos_direito + alunos_computacao; 

printf ("\n\nO percentual de alunos inscritos no curso de Engenharia �: %.2f%%\n", ((float)alunos_engenharia / (float)total_alunos) * 100);
printf ("O valor total arrecadado por m�s pelo curso de Engenharia � R$:%'.2f\n\n", (float)valor_engenharia * (float)alunos_engenharia);

printf ("O percentual de alunos inscritos no curso de Direito �: %.2f%%\n", ((float)alunos_direito / (float)total_alunos) * 100);
printf ("O valor total arrecadado por m�s pelo curo de Direito � R$:%'.2f\n\n", valor_direito * (float)alunos_direito);
 
printf ("O percentual de alunos inscritos no curo de Computa��o �: %.2f%%\n", ((float)alunos_computacao / (float)total_alunos) * 100);
printf ("O valor total arrecadado por m�s pelo curso de Computa��o � R$:""%'.2f\n\n", valor_computacao * (float)alunos_computacao);


total_valor = (valor_engenharia + valor_direito + valor_computacao) * total_alunos;


setlocale(LC_ALL, "C");

printf("\n\nO valor total arrecadado pela Faculdade %s", faculdade);


setlocale(LC_ALL, "portuguese");
printf ("no per�odo de um ano � R$""%'.2f", total_valor * 12);


}
