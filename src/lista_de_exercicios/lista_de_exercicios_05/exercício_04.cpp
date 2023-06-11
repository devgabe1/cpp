#include<stdio.h>
int main(){

float vetor_01[10], vetor_02[10], vetor_03[10];

printf ("Multiplicador de vetores.\n\n");

printf ("Preenchendo o Vetor 01:\n");

for (int i = 0; i <= 19; i++){
    printf ("Insira um valor: ");
    scanf ("%f", &vetor_01[i]);
}

printf ("Preenchendo o Vetor 02:\n");
for (int i = 0; i <= 19; i++){
    printf ("Insira um valor: ");
    scanf ("%f", &vetor_02[i]);
}

for (int i = 0; i <= 19; i++){
    vetor_03[i] = (vetor_01[i] * vetor_02[i]);
}

printf ("Resultado das multiplicações dos elementos de mesmo índice:\n");

for (int i = 0; i <= 19; i++){
    printf("%.2f\n", vetor_03[i]);
}
}