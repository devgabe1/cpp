#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale (LC_ALL, "portuguese");

char aluno [50];
float nota1, nota2, nota3, nota4, media, nota_exame, media_exame;

printf ("\nCalcular a média com Exame\n");

printf ("\nInserir nome do aluno:");
fgets (aluno, 50, stdin);


printf ("\nInsira sua nota no primeiro bimestre: ");
scanf ("%f", &nota1);
	while (nota1 > 10) {
	printf ("Gentileza inserir uma nota até 10 pontos: ");
	scanf ("%f", &nota1);
	}


printf ("\nInsira sua nota no segundo bimestre: ");
scanf ("%f", &nota2);
	while (nota2 > 10) {
	printf ("Gentileza inserir uma nota até 10 pontos: ");
	scanf ("%f", &nota2);
	}


printf ("\nInsira sua nota no terceiro bimestre: ");
scanf ("%f", &nota3);
	while (nota3 > 10) {
	printf ("Gentileza inserir uma nota até 10 pontos: ");
	scanf ("%f", &nota3);
	}



printf ("\nInsira sua nota no quarto bimestre: ");
scanf ("%f", &nota4);
while (nota4 > 10){
	printf ("Gentileza inserir uma nota até 10 pontos: ");
	scanf ("%f", &nota4);
}


media = (nota1 + nota2 + nota3 + nota4) / 4;

if (media >= 7 ){
	printf ("\n\nParabêns %s!\nVocê foi aprovado(a)\nMédia final: %.2f", aluno, media);
	
	
}	else { 
printf ("\n\nInfelizmente sua nota não atingiu a média, por gentileza informar a nota do seu Exame: ");
	scanf ("%f", &nota_exame);
		while (nota_exame > 10) {
			printf ("Gentileza inserir uma nota até 10 pontos: ");
			scanf ("%f", &nota_exame);
		}
	
	
	media_exame = (nota1 + nota2 + nota3 + nota4 + nota_exame) / 5;
	
 if (media_exame >= 5) {
	printf ("\n\nParabêns %s!\nVocê foi aprovado(a) com a nota do exame.\n", aluno);
	printf ("Média com exame: %.2f", media_exame);

	} else  {
	printf ("\n\nInfelizmente sua nota não atingiu a média necessária com Exame.\n");
	printf ("Média com exame: %.2f", media_exame);
	}
}
	
	
}