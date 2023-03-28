#include <stdio.h>

int main(){

float Graus_Celsius;
Graus_Celsius = 15;

printf("Graus_Celsius");
printf("Bem vindo ao Conversor de temperatura!\n\n\n");
printf("Insira a temperatura em Graus Celsius:");
scanf("%f", &Graus_Celsius);
 

printf("Temperatura:");
printf("%.2f\n",(9 * Graus_Celsius + 160) / 5);

}

