#include <stdio.h>
int main(){

int num = 0, multi_03 = 0, multi_05 = 0;

printf ("\nAtividade 04 - Apresentar soma de mútiplos de 3 e 5.\n");
printf ("Insira um número positivo para adiciona-lo ao cálculo e um número negativo para parar o cálculo.\n\n");

do {
    printf("Insira um número: ");
    scanf ("%d", &num);
    if (num < -1){
        break;
    }
    if (num % 3 == 0){
        multi_03 += num;
    }
    if (num % 5 == 0){
        multi_05 += num;
    }
} while (num > -1);

printf ("\n\nA soma dos números múltiplos de 03 é igual a: %d\n", multi_03);
printf ("A soma dos números múltiplos de 05 é igual a: %d\n", multi_05);
}