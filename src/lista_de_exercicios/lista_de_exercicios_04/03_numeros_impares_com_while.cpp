#include <stdio.h>
int main (){

int numero = 0;

printf ("\nApresentar valores ímpares de 0 a 20\n\n");

while (numero <= 20){
    if (numero % 2 == 1){
        printf ("O número %d é impar.\n", numero);
}
    numero ++; //Adição feita fora do if para não ficar presa no while caso o if seja falso.
}
}