#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");

float cotacao_dolar, valor_reais;


printf("Conversor de D�lar para Real");

printf("\n\n\nInsira o valor em Reais\nR$:");
scanf("%f", &valor_reais);

printf("\nInsira a cota��o atual do D�lar\nR$:");	
scanf("%f", &cotacao_dolar);

printf("Valor em US$:%.2f", cotacao_dolar * valor_reais);


}
