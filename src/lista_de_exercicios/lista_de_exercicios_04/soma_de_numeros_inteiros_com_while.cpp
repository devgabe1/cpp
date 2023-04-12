#include <stdio.h>
int main() {

int numero1 = 0, numero2 = 0;
printf ("Apresentar soma dos cem primeiros números inteiros.");

while (numero2 <= 100){
    printf ("%d + %d = %d\n", numero1, numero2, numero1 + numero2);
    numero1 += numero2; //variação: numero1 = numero1 + numero2;//
    numero2 += 1;
}
}