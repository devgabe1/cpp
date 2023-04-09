#include <stdio.h>
#include <cstring>
int main(){

char nome[50], sexo;

printf ("\nIdentificar o sexo do usuário.\n\n");

printf ("Insira seu nome: ");
fgets (nome, 50, stdin);

nome[strcspn(nome, "\n")] = 0; //Essa função retorna o índice do primeiro caractere em uma string que aparece em outra string especificada.

printf ("\nInsira o seu sexo: ");
scanf ("%c", &sexo);

while (sexo != 'M' && sexo != 'F') {
    printf ("\nGentileza preencher o campo sexo com M ou F.");
    printf ("\n\nInsira o seu sexo: ");
    scanf (" %c", &sexo);
}

if (sexo == 'M'){
    printf ("Ilmo. Sr. %s.\n", nome);
} else {
    printf ("\nIlma. Sra. %s.\n", nome);
}
}

