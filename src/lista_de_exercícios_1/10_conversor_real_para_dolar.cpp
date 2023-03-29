#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");

float cotacao_dolar, valor_reais;


printf("Conversor de Real para Dólar");

printf("\n\n\nInsira o valor em Reais\nR$:");
scanf("%f", &valor_reais);

printf("\nInsira a cotação atual do Dólar\nR$:");	
scanf("%f", &cotacao_dolar);

printf("Valor em US$:%.2f", cotacao_dolar * valor_reais);


}
