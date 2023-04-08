#include <stdio.h>
#include <string.h>
#include <locale.h>
#define _POSIX_C_SOURCE 200809L
int main(){

int exercicio;

printf ("\nBem vindo(a) a lista de exercício 03.\n\n");
printf ("Selecione o exercício desejado:\n\n");
printf ("Cálculo de cŕedito variável: 1\n");
printf ("Carrinho de compras: 2\n");
printf ("Cálculo de dívida: 3\n");
printf ("Cálculo de aumento: 4\n");
printf ("Compra de maçãs: 5\n\n");

printf ("Insira o código do exercício desejado: ");
scanf ("%d", &exercicio);

while (exercicio > 5 || exercicio < 1){
    printf ("Insira um código válido: ");
    scanf ("%d", &exercicio);
}

switch (exercicio){
        case 1:
        float saldo_medio, valor_credito;

        printf ("\n\nCalcular crédito especial com base no saldo médio\n\n");

        printf ("Insira seu saldo médio do ano anterior R$: ");
        scanf ("%f", &saldo_medio);

        // Não é possível usar a função Switch pois se trata de uma varíavel float //

        if (saldo_medio <= 200){
            printf ("\nInfelizmente o usuário não possui crédito disponível.\n");
        }
        if (saldo_medio >= 201 && saldo_medio <= 400){
            valor_credito = (saldo_medio * 0.2);
            printf ("\nSaldo médio: %.2f\nValor do crédito disponível: %.2f", saldo_medio, valor_credito);
        }
        if (saldo_medio >= 401 && saldo_medio <= 600){
            valor_credito = (saldo_medio * 0.3);
            printf ("\nSaldo médio: %.2f\nValor do crédito disponível: %.2f", saldo_medio, valor_credito);
        }
        if (saldo_medio >= 601){
            valor_credito = saldo_medio * 0.4;
            printf ("\nSaldo médio: %.2f\nValor do c´redito disponível: %.2f\n", saldo_medio, valor_credito);
        }
        break;

    case 2:

        char compra2[5], compra3[5];
        int codigo_produto, quantidade;
        float total, total2, total3;

        printf ("\nCalcular valor total de uma venda.\n\n");

        printf ("\nCódigos dos produtos:\nProduto A: 5\nProduto B: 6\nProduto C: 2\n\n");


        printf ("Insira o código do produto desejado: ");
        scanf ("%d", &codigo_produto);

        while (codigo_produto != 5 && codigo_produto != 6 && codigo_produto != 2){
            printf ("Código inválido, por gentileza inserir um código válido: ");
            scanf ("%d", &codigo_produto);
        }

        printf ("Insira a quantidade de produtos desejados: ");
        scanf ("%d", &quantidade);

        switch (codigo_produto)
        {
            case 5:
                total = quantidade * 32;
                printf ("\nO total da compra será R$: %.2f\n", total);
                break;
        
            case 6:
                total = quantidade * 45;
                printf ("\nO total da compra será R$: %.2f\n", total);
                break;
        
            case 2:
                total = quantidade * 37;
                printf ("\nO total da compra será R$: %.2f\n", total);
        }
        fflush(stdin);
        printf ("\n\nDeseja fazer o calculo com mais algum produto? (S/N): ");
        fgets (compra2, 5, stdin);

        while (strcmp (compra2, "S\n") != 0 && strcmp (compra2, "N\n") != 0 ){
            fflush (stdin);
            printf ("Gentileza selecionar uma opção válida (S/N): ");	
            fgets (compra2, 5, stdin);
        }

        if (strcmp (compra2, "S\n") != 0){
            printf ("\nCálculo finalizado.\n");
        } else {
            printf ("\nInsira o código do produto: ");
            scanf ("%d", &codigo_produto);
        
            while (codigo_produto != 5 && codigo_produto != 6 && codigo_produto != 2){
                printf ("Código inválido, por gentileza inserir um código válido: ");
                scanf ("%d", &codigo_produto);
        }

        printf ("Insira a quantidade de produtos desejados: ");
        scanf ("%d", &quantidade);

        switch (codigo_produto)
        {
            case 5:
                total2 = quantidade * 32;
                printf ("\nO total das duas compras será R$: %.2f\n", total + total2);
                break;
        
            case 6:
                total2 = quantidade * 45;
                printf ("\nO total das duas compras será R$: %.2f\n", total + total2);
                break;
        
            case 2:
                total2 = quantidade * 37;
                printf ("\nO total das duas compras será R$: %.2f\n", total + total2);
        }

        fflush(stdin);
        printf ("\n\nDeseja fazer o calculo com mais algum produto? (S/N): ");
        fgets (compra3, 5, stdin);

        while (strcmp (compra3, "S\n") != 0 && strcmp (compra3, "N\n") != 0 ){
            fflush (stdin);
            printf ("Gentileza selecionar uma opção válida (S/N): ");	
            fgets (compra3, 5, stdin);
        }

        if (strcmp (compra3, "S\n") != 0){
            printf ("\nCálculo finalizado.\n");
        } else {
            printf ("\nInsira o código do produto: ");
            scanf ("%d", &codigo_produto);
        
            while (codigo_produto != 5 && codigo_produto != 6 && codigo_produto != 2){
                printf ("Código inválido, por gentileza inserir um código válido: ");
                scanf ("%d", &codigo_produto);
        }

        printf ("Insira a quantidade de produtos desejados: ");
        scanf ("%d", &quantidade);

        switch (codigo_produto)
        {
            case 5:
                total3 = quantidade * 32;
                printf ("\nO total das duas compras será R$: %.2f\n", total + total2 + total3);
                break;
        
            case 6:
                total3 = quantidade * 45;
                printf ("\nO total das duas compras será R$: %.2f\n", total + total2 + total3);
                break;
        
            case 2:
                total3 = quantidade * 37;
                printf ("\nO total das duas compras será R$: %.2f\n", total + total2 + total3);
        }
        }
        }
        break;

    case 3:

        char codigo_produto3[5];
        int quantidade3;
        float divida;

        printf ("\nCalcular dívida de um cliente.\n\n");

        printf ("Produtos e códigos:\n\n");
        printf ("Produto A: ABCD\nProduto B: XYPK\nProduto C: KLMP\nProduto D: QRST\n\n");

        printf ("Insira o código do produto: ");
        scanf ("%c", codigo_produto3);
        fgets (codigo_produto3, 5, stdin);

        while (strcmp (codigo_produto3, "ABCD") != 0 && strcmp (codigo_produto3, "XYPK") != 0 && strcmp (codigo_produto3, "KLMP") != 0 && strcmp (codigo_produto3, "QRST") != 0){
            printf ("Código inválido, por gentileza insira um código da lista: ");
            fgets (codigo_produto3, 5, stdin);
        }

        printf ("Insira a quantidade: ");
        scanf ("%d", &quantidade3);


        if (strcmp (codigo_produto3, "ABCD") == 0){
            divida = quantidade3 * 5.3;
        } else if (strcmp (codigo_produto3, "XYPK") == 0){
            divida = quantidade3 * 6;
        } else if (strcmp (codigo_produto3, "KLMP") == 0){
            divida = quantidade3 * 3.2;
        } else if (strcmp (codigo_produto3, "QRST") == 0){
            divida = quantidade3 * 2.5;
        } 

        printf ("\n\nO valor total da dívida é R$: %.2f\n", divida);
        break;

    case 4:
        int codigo;
        float sal_atual, sal_novo;

        printf ("\nCalcular aumento com base no cargo.\n\n");

        printf ("-------------------------\n");
        printf ("|  Código  |   Cargo    |\n");
        printf ("-------------------------\n");
        printf ("|   101    |  Gerente   |\n");
        printf ("|   102    | Engenheiro |\n");
        printf ("|   103    |  Técnico   |\n");
        printf ("|-----------------------|\n");

        printf ("\nInsira o código do seu cargo: ");
        scanf ("%d", &codigo);

        printf ("Insira o valor do salário atual R$: ");
        scanf ("%f", &sal_atual);

        switch (codigo)
        {
        case 101:
            sal_novo = sal_atual * 1.1;
            break;
        case 102:
            sal_novo = sal_atual * 1.2;
            break;
        case 103:
            sal_novo = sal_atual * 1.3;
            break;
        default:
            sal_novo = sal_atual * 1.4;
            break;
        }
        printf ("\nSalário atual R$: %.2f\nSalário com aumento R$: %.2f\nIsso significa um aumento de R$: %.2f\n", sal_atual, sal_novo, sal_novo - sal_atual);
        
        break;

    case 5:
        int quantidade2;
        float total1;

        printf ("\nCalculo compra de maçãs.\n\n");

        printf ("Insira a quantidade: ");
        scanf ("%d", &quantidade2);

        if (quantidade2 < 12){
            total1 = quantidade2 * 1.3;
        } else {
            total1 = quantidade2 * 1;
        }

        printf ("\n\nO valor total da compra é R$: %.2f\n", total1);    
        
        break;

    }
}


