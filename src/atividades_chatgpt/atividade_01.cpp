#include<stdio.h>
int main (){

int num = 0, media = 0, qnt_num = 0;
printf ("\nAtividade 01 - Fazer a média de um conjunto de algorítimos.\n");
printf ("Insira um número positivo para adiciona-lo a média e um número negativo para parar o cálculo.\n\n");

do {
    printf ("Insira um número: ");
    scanf ("%d", &num);
    if  (num < 0){
        break;
    }
    media += num;
    qnt_num ++;
}   while (num > -1);

printf ("A média dos números inseridos é: %d\n", media);

}