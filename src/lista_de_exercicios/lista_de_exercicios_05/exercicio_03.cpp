#include <stdio.h>
#include <math.h>
int main(){

float N[20], menor = INFINITY, posi;

printf("Leitura de um vetor.\n");

for (int i = 0; i <= 19; i++)
{
    printf("Insira um valor: ");
    scanf("%f", &N[i]);
}

for (int i = 0; i <= 19; i++){
    if (N[i] < menor){
        menor = N[i];
        posi = i;
    }
}

printf ("O menor valor informado foi %.2f e sua posição no vetor é %.f.", menor, posi);
}
