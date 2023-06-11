#include <stdio.h>
int main() {

float valor[5], soma;

printf("Apresentar a soma de 5 valores.\n\n");

for (int i = 0; i <= 4; i++){
    printf("Insira um valor: ");
    scanf("%f", &valor[i]);
}
for (int i = 0; i <= 4; i++){
    soma += valor[i];
}
printf("%.2f", soma);
}