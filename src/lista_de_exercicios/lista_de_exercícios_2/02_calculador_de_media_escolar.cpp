#include <stdio.h>
#include <math.h>
#include <locale.h>
int main (){
setlocale (LC_ALL, "portuguese");

char aluno[50];
float nota1, nota2, nota3, nota4, media;

printf ("\nCalcular m�dia escolar\n\n");


printf ("Ol� aluno, por gentileza insira seu nome: ");
fgets (aluno, 50, stdin);


printf ("\n\nInsira sua nota do primeiro bimestre: ");
scanf ("%f", &nota1);
while (nota1 > 10){
	printf ("Gentileza inserir um valor at� 10,00.");
	printf ("\n\nInsira sua nota do primeiro bimestre: ");
	scanf ("%f", &nota1);
}


printf ("\nInsira sua nota do segundo bimestre: ");
scanf ("%f", &nota2);
while (nota2 > 10){
	printf ("Gentileza inserir um valor at� 10,00");
	printf ("\n\nInsira sua nota do segundo bimestre: ");
	scanf ("%f", &nota2);
}


printf ("\nInsira sua nota do terceiro bimestre: ");
scanf ("%f", &nota3);
while (nota3 > 10){
	printf ("Gentileza inserir um valor at� 10,00");
	printf ("\n\nInsira sua nota do terceiro bimestre: ");
	scanf ("%f", &nota3);
}


printf ("\nInsira sua nota do quarto bimestre: ");
scanf ("%f", &nota4);
while (nota4 > 10){
	printf ("Gentileza inserir um valor at� 10,00");
	printf ("\n\nInsira sua nota do quarto bimestre:");
	scanf ("%f", &nota4);
	
}

media = (nota1 + nota2 + nota3 + nota4) / 4;

if (media < 5){
	
	setlocale (LC_ALL, "C");
	printf ("\n\nSinto muito %s, ", aluno);
	
    setlocale(LC_ALL, "portuguese");	
	printf ("mas sua m�dia final n�o atingiu a m�dia necess�ria.");
	printf ("\nM�dia final: %2.f", media);
} else {
	
	setlocale (LC_ALL, "");
	printf ("\n\nParab�ns ");

	setlocale (LC_ALL, "C");
	 printf ("%s!, ", aluno);
	
	setlocale (LC_ALL, "portuguese");
	printf ("voc� foi aprovado(a)!");
	printf ("\nM�dia final: %2.f", media);
	
}
	
	
}
	
	

