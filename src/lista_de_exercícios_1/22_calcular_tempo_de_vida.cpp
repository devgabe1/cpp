#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale (LC_ALL, "portuguese");

float anos, meses, dias, ano_em_dias, meses_em_dias, total_em_dias;

printf ("Calculador de tempo de Vida\n\n");

printf ("\nInsira quantos anos de vida o usu�rio possui:");
scanf ("%f", &anos);

printf ("\nInsira quantos meses de vida o usu�rio possui: ");
scanf ("%f", &meses);

while ( meses > 12){
printf ("\nGentileza inserir um valor v�lido.\n");
printf ("\nInsira quantos meses de vida o usu�rio possui: ");
scanf ("%f", &meses);
}


printf ("\nInsira quantos dias de vida o usu�rio possui: ");
scanf ("%f", &dias);

while (dias > 31){
printf ("\nGentileza inserir um valor v�lido.\n");
printf ("\nInsira quantos dias de vida o usu�rio possui: ");
scanf ("%f", &dias);
}

//partindo do princ�pio que m�s tem 30 dias
ano_em_dias = (anos * 12) * 30;
meses_em_dias = meses * 30;
total_em_dias = ano_em_dias + meses_em_dias + dias;

printf ("\n\nIdade do usu�rio em Horas %.fh", total_em_dias * 24);

printf ("\nIdade do usu�rio em Minutos %.fmin", (total_em_dias * 24) * 60);

printf ("\nIdade do usu�rio em segundos %.fseg", ((total_em_dias * 24) * 60) *60);

	
	
return 0;
	
}
