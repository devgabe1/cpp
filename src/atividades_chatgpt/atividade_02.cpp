#include <stdio.h>
int main(){

int num, maior_num = NULL, menor_num = NULL;

printf ("\nAtividade 02 - Apresentar o maior e o menor número de um conjunto de algarítimos.\n");
printf ("Insira um número positivo para adiciona-lo ao cálculo e um número negativo para parar o cálculo.\n\n");

do{
printf ("Insira um número: ");
scanf ("%d", &num);
if (num < -1){
    break;
}
    if (num > maior_num){
        maior_num = num;
        if (num < menor_num){
            menor_num = num;
       }
    }
} while (num >-1);
printf ("O maior número é %d e o menor é %d.", maior_num, menor_num);

}