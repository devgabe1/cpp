#include <stdio.h>
#include <cstring>
int main(){

char nome[50], sexo;

printf ("\nIdentificar o sexo do usuário.\n\n");

printf ("Insira seu nome: ");
fgets (nome, 50, stdin);

printf ("\nInsira o seu sexo: ");
scanf ("%c", &sexo);

while (sexo == 'm') {
    printf ("\nGentileza preencher o campo sexo com M ou F.");
    printf ("\n\nInsira o seu sexo: ");
    scanf ("%c", &sexo);
}
}