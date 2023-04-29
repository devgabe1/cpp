#include <stdio.h>
int main(){

int num[5], valor, num_menores = 0, qnt_vetor = 0;

printf ("\nPreenchendo o Vetor.\n\n");

for (int i = 0; i < 5; i++) {
    printf ("Insira um valor: ");
    scanf ("%i", &num[i]);
}

printf ("Insira um valor a ser comparado: ");
scanf ("%i", &valor);

printf ("\nValores maiores que o valor comparado:\n");

for (int i = 0; i < 5; i++) {
    if (valor < num[i]) {
        printf ("%i\n", num[i]);
}
}

for (int i = 0; i < 5; i++) {
    if (valor > num[i]) {
        num_menores += 1;
    }
}

printf ("\nQuantidade de números menores que o valor comparado: %i\n", num_menores);

for (int i = 0; i < 5; i++) {
    if (valor == num[i]) {
        qnt_vetor += 1;
    }
}
printf ("\nQuantidade de vezes que o valor declarado aparece no vetor: %i\n", qnt_vetor);
return 0;

}