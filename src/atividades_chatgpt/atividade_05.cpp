#include <stdio.h>
int main(){
int num = 0, soma = 0, num_soma = 0;

printf ("\nAtividade 05 - Apresentar a soma dos números que antecedem o número informado.\n");
printf ("Insira um número: ");
scanf ("%d", &num);
while (num > num_soma){
    soma += num_soma;
    num_soma ++;
}
printf ("\nA soma dos algarítimos que antecedem o %d é igual a %d\n", num, soma);
}