#include <stdio.h>

int main() {
int num_paredes;
float largura, altura, area_total, qtd_tijolos, preco_tijolo, gasto_total;
// Passo 1
printf("Quantas paredes serão envolvidas no cálculo? ");
scanf("%d", &num_paredes);

// Loop para cada parede
for(int i = 1; i <= num_paredes; i++) {
    printf("\n\nMEDIDAS DA PAREDE %d:\n", i);

    // Passo 2 - Cálculo da área
    printf("Largura (em metros): ");
    scanf("%f", &largura);
    printf("Altura (em metros): ");
    scanf("%f", &altura);

    area_total += largura * altura;

    // Passo 3 - Cálculo da quantidade de tijolos
    int tipo_tijolo;
    printf("\nEscolha o tipo de tijolo:\n");
    printf("1. Bloco de concreto 9x19x39 cm / 14x19x39cm\n");
    printf("2. Bloco cerâmico (tijolo baiano) em pé em parede com 10 cm de largura\n");
    printf("3. Bloco cerâmico (tijolo baiano) deitado em parede com 20 cm de largura\n");
    printf("4. Tijolo comum maciço em parede com 10 cm de largura\n");
    printf("5. Tijolo comum maciço em parede com 20 cm de largura\n");
    printf("Digite o número correspondente: ");
    scanf("%d", &tipo_tijolo);

    switch(tipo_tijolo) {
        case 1:
            qtd_tijolos += area_total * 12.5;
            break;
        case 2:
            qtd_tijolos += area_total * 23;
            break;
        case 3:
            qtd_tijolos += area_total * 46;
            break;
        case 4:
            qtd_tijolos += area_total * 92;
            break;
        case 5:
            qtd_tijolos += area_total * 184;
            break;
        default:
            printf("Opção inválida!\n");
            i--; // Repetir para a mesma parede
    }
}

// Passo 3 (cont.) - Considerar 10% de perdas
qtd_tijolos *= 1.1;

// Passo 4 - Cálculo do gasto total
printf("\n\nPREÇO DOS TIJOLOS:\n");
printf("Digite o preço por unidade do tijolo escolhido: ");
scanf("%f", &preco_tijolo);

gasto_total = qtd_tijolos * preco_tijolo;

// Apresentação dos resultados
printf("\n\nRESULTADOS:\n");
printf("Área total a ser construída: %.2f m²\n", area_total);
printf("Quantidade de tijolos necessários: %.2f unidades\n", qtd_tijolos);
printf("Gasto total com tijolos: R$ %.2f\n", gasto_total);

return 0;
}
