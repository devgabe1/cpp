#include <locale.h>
#include <Math.h>

int main(){
	
	float TemperaturaCelsius;
	
	printf ("Bem vindo ao Conversor de Temperatura!\n\n");
	printf ("Digite e temperatura em graus Fahrenheit:");
	scanf ("%f", &TemperaturaCelsius);
	
	printf ("Temperatura em graus Celcius: ");
	printf ("%.2f\n", (TemperaturaCelsius - 32) * 5 / 9);
	
	
	
}
