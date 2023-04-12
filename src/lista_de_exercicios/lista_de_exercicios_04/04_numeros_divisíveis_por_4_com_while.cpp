#include <stdio.h>
int main(){

int numero = 1;

printf ("\nApresentar todos números divisíveis por 4 até 200.\n\n");

while (numero <= 400){
    if (numero % 4 == 0){
        printf ("O número %d é divisível por 4.\n", numero);
}
    numero ++; //Adição feita fora do if para não ficar presa no while caso o if seja falso.
}

}