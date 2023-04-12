//Aluno: Gabriel Schultz Vasconcelos

#define _POSIX_C_SOURCE 200809L // Definição para formatar os milhares com ponto.
#include <stdio.h>
#include <string.h>

int main(){



int quant_paredes, tipo_tijolo;
float altura, largura, area_total, quant_tijolos, valor_tijolo, quant_variavel, area_total_final;

printf ("\nCalcular o total de tijolos necessários em uma construção\n\n");


//Passo 01 - Definição do número de paredes
printf ("Insira a quantidade de paredes que serão envolvidas para o cálculo da quantidade de tijolos: ");
scanf ("%d", &quant_paredes);


//Passo 02 - Cálculo da área
for(int i = 1; i <= quant_paredes; i++) {
	area_total = 0;
    printf("\n\nMEDIDAS DA PAREDE %d:\n", i);
    printf ("Insira a largura em metros da parede %d: ", i);
    scanf ("%f", &largura);
    printf ("\nInsira a altura em metros da parede %d: ", i);
    scanf ("%f", &altura);

    area_total = largura * altura;
	area_total_final += largura * altura;
	
    printf ("\nEscolha o tipo do tijolo que será usado: \n");
    printf ("1 - Bloco de concreto.\n");
    printf ("2 - Bloco cerâmico (tijolo baiano) em pé.\n");
    printf ("3 - Bloco cerâmico (tijolo baiano) deitado.\n");
    printf ("4 - Tijolo comum maciço (com 10cm de largura).\n");
    printf ("5 - Tijolo comum maciço (com 20cm de largura).\n");
    printf ("\nDigite o código do tipo de tijolo desejado: ");
    scanf ("%d", &tipo_tijolo);
    
    switch (tipo_tijolo){
        case 1:
            quant_tijolos += area_total * 12.5; // Quantidade de tijolos que será exibida ao final do cálculo.
            quant_variavel = area_total * 12.5; // Quantidade que será usada apenas no cálculo do valor do tijolo.
            valor_tijolo += quant_variavel * 3.7 * 1.1; // Valor do tijolo + 10% de desperdício.
            quant_variavel = 0; // Quantidade zerada para que não seja usada no próximo cálculo de valor.
            break;
        case 2:
            quant_tijolos += area_total * 23;
            quant_variavel = area_total * 23;
            valor_tijolo += quant_variavel * 0.89 * 1.1;
            quant_variavel = 0;
            break;
        case 3:
            quant_tijolos += area_total * 46;
            quant_variavel = area_total * 46;
            valor_tijolo += quant_variavel * 0.89 * 1.1;
            quant_variavel = 0;
            break;
        case 4:
            quant_tijolos += area_total * 92;
            quant_variavel = area_total * 92;
            valor_tijolo += quant_variavel * 0.79 * 1.1;
            quant_variavel = 0;
            break;
        case 5:
            quant_tijolos += area_total * 184;
            quant_variavel = area_total * 184;
            valor_tijolo += quant_variavel * 0.79 * 1.1;
            quant_variavel = 0;
			break;
        default:
        	while (tipo_tijolo > 5 || tipo_tijolo <= 0){
            printf("Insira um código válido:");
            scanf ("%d", &tipo_tijolo);
        }
    }
}
quant_tijolos = quant_tijolos * 1.1; //Adicionando os 10% de desperdício na quantidade total de tijolos.

//Apresentação dos valores finais.
printf ("\n\nÁrea a ser construída: %'.2f m²", area_total_final);
printf ("\nQuantidade de tijolos que serão usados: %'.2f", quant_tijolos);
printf ("\nDinheiro gasto R$: %'.2f", valor_tijolo);

}
//Referências usadas de base para valores:
//Tijolo 01: encurtador.com.br/uAU58
//Tijolo 02: encurtador.com.br/gprwH
//Tijolo 03: encurtador.com.br/gprwH
//Tijolo 04: encurtador.com.br/foKT4
//Tijolo 05: encurtador.com.br/foKT4
