#include <stdio.h>
#include <math.h>
#include <locale.h>
int main (){
setlocale(LC_ALL, "portuguese");

float votos_c1, votos_c2, votos_c3, votos_nulos, votos_brancos, eleitores, votos_validos;
char candidato_1[50], candidato_2[50], candidato_3[50];

printf ("Bem vinda a Urna eletrônica!\n\n\n");

printf ("Insira o nome do Candidato 1: ");
fgets (candidato_1, 50, stdin);
printf ("Bem vindo as eleições %s!\n\n", candidato_1);


printf ("Insira o nome do Candidato 2:");
fgets (candidato_2, 50, stdin);
printf ("Bem vindo as eleições %s!\n\n", candidato_2);

printf ("Insira o nome do Candidato 3:");
fgets (candidato_3, 50, stdin);
printf("Bem vindo as eleições %s!\n\n\n", candidato_3);


printf ("Insira a quantidade de votos que o candidato %s recebeu:", candidato_1);
scanf ("%f", &votos_c1);

printf ("\nInsira a quantidade de votos que o candidato %s recebeu:", candidato_2);
scanf ("%f", &votos_c2);

printf ("\nInsira a quantidade de votos que o candidato %s recebeu:", candidato_3);
scanf ("%f", &votos_c3);

printf ("\nInsira a quantidade de votos nulos:");
scanf ("%f", &votos_nulos);

printf ("\nInsira a quantidade de votos em branco:");
scanf ("%f", &votos_brancos);


eleitores = votos_c1 + votos_c2 + votos_c3 + votos_nulos + votos_brancos;
votos_validos = votos_c1 + votos_c2 + votos_c3;


printf ("\n\n\nNúmero total de eleitores: %.f", eleitores);

printf ("\nPercentual de votos válidos: %.2f%%", votos_validos / eleitores * 100);

printf ("\nPercentual de votos para o candidato %s: %.2f%%", candidato_1, votos_c1 / eleitores *100);

printf ("\nPercentual de votos para o candidato %s: %.2f%%", candidato_2, votos_c2 / eleitores *100);

printf ("\nPercentual de votos para o candedato %s: %.2f%%", candidato_3, votos_c3 / eleitores *100);


printf ("\n\nPercentual de votos nulos: %.2f%%", votos_nulos / eleitores * 100);

printf ("\n\nPercentual de votos em branco: %.2f%%\n", votos_brancos / eleitores * 100);


if (votos_c1 > votos_c2 && votos_c1 > votos_c3){
	
	printf ("\nO vencedor das eleições é o candidato %s!", candidato_1 );
}
else if (votos_c2 > votos_c1 && votos_c2 > votos_c3){
	
	printf ("\nO vencedor das eleições é o candidato %s!", candidato_2);
}
	else {
		printf ("\nO vencedor das eleições é o candidato %s!", candidato_3);
	}
return 0;


	
}
