#include  <stdio.h>
#include <locale.h>

int main(){
float litros, tempo_de_viagem, distancia, velocidade;	

setlocale(LC_ALL,"portuguese");

printf ("Bem vindo!\nVamos calcular quantos litros de gasolina voc� gastar� em sua viagem.\n");
printf ("Insira o tempo gasto em sua viagem:");
scanf ("%f", &tempo_de_viagem);

printf ("Insira a sua velociade m�dia durante a viagem:");
scanf ("%f", &velocidade);

distancia = (tempo_de_viagem * velocidade);

litros = (distancia/12);

printf ("\nVelocidade m�dia: %.f" "km/h", velocidade);
printf ("\nTempo gasto: %.f" "h", tempo_de_viagem);
printf ("\nDist�ncia percorrida: %.f" "km/h", distancia);
printf ("\nLitros necess�rios: %.f" "L", litros );
}
