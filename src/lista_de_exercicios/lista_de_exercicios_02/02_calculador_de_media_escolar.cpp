#include <stdio.h>
#include <math.h>
#include <locale.h>
int main (){
setlocale (LC_ALL, "portuguese");

char aluno[50];
float nota1, nota2, nota3, nota4, media;

printf ("\nCalcular média escolar\n\n");


printf ("Olá aluno, por gentileza insira seu nome: ");
fgets (aluno, 50, stdin);


printf ("\n\nInsira sua nota do primeiro bimestre: ");
scanf ("%f", &nota1);
while (nota1 > 10){
	printf ("Gentileza inserir um valor até 10,00.");
	printf ("\n\nInsira sua nota do primeiro bimestre: ");
	scanf ("%f", &nota1);
}


printf ("\nInsira sua nota do segundo bimestre: ");
scanf ("%f", &nota2);
while (nota2 > 10){
	printf ("Gentileza inserir um valor até 10,00");
	printf ("\n\nInsira sua nota do segundo bimestre: ");
	scanf ("%f", &nota2);
}


printf ("\nInsira sua nota do terceiro bimestre: ");
scanf ("%f", &nota3);
while (nota3 > 10){
	printf ("Gentileza inserir um valor até 10,00");
	printf ("\n\nInsira sua nota do terceiro bimestre: ");
	scanf ("%f", &nota3);
}


printf ("\nInsira sua nota do quarto bimestre: ");
scanf ("%f", &nota4);
while (nota4 > 10){
	printf ("Gentileza inserir um valor até 10,00");
	printf ("\n\nInsira sua nota do quarto bimestre:");
	scanf ("%f", &nota4);
	
}

media = (nota1 + nota2 + nota3 + nota4) / 4;

if (media < 5){
	
	setlocale (LC_ALL, "C");
	printf ("\n\nSinto muito %s, ", aluno);
	
    setlocale(LC_ALL, "portuguese");	
	printf ("mas sua média final não atingiu a média necessária.");
	printf ("\nMédia final: %2.f", media);
} else {
	
	setlocale (LC_ALL, "");
	printf ("\n\nParabêns ");

	setlocale (LC_ALL, "C");
	 printf ("%s!, ", aluno);
	
	setlocale (LC_ALL, "portuguese");
	printf ("Você foi aprovado(a)!");
	printf ("\nMédia final: %2.f", media);
	
}
	
	
}
	
	

