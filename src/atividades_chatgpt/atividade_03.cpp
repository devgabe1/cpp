#include <stdio.h>
int main(){

int num = 0, qnt_impar = 0, qnt_par = 0;

printf ("\nAtividade 03 - Apresentar a quantidade de números pares e ímpares de um conjunto de algarítimos.\n");
printf ("Insira um número positivo para adiciona-lo ao cálculo e um número negativo para parar o cálculo.\n\n");

do{
    printf ("Insira um número: ");
    scanf ("%d", &num);
    if (num < 0){
        break;
    }
    if (num % 2 == 0){
        qnt_par ++;
    } else {
        qnt_impar ++;
    }
    } while (num > -1);
    printf ("%d Números inseridos foram pares e %d foram ímpares.", qnt_par, qnt_impar);
}
