#include <stdio.h>
#include <string.h>

int main(){

char codigo_produto[5];
int quantidade;
float divida;

printf ("\nCalcular dívida de um cliente.\n\n");

printf ("Produtos e códigos:\n\n");
printf ("Produto A: ABCD\nProduto B: XYPK\nProduto C: KLMP\nProduto D: QRST\n\n");

printf ("Insira o código do produto: ");
fflush (stdin);
fgets (codigo_produto, 5, stdin);

while (strcmp (codigo_produto, "ABCD") != 0 && strcmp (codigo_produto, "XYPK") != 0 && strcmp (codigo_produto, "KLMP") != 0 && strcmp (codigo_produto, "QRST") != 0){
    printf ("Código inválido, por gentileza insira um código da lista: ");
    fgets (codigo_produto, 5, stdin);
}

printf ("Insira a quantidade: ");
scanf ("%d", &quantidade);


if (strcmp (codigo_produto, "ABCD") == 0){
    divida = quantidade * 5.3;
} else if (strcmp (codigo_produto, "XYPK") == 0){
    divida = quantidade * 6;
} else if (strcmp (codigo_produto, "KLMP") == 0){
    divida = quantidade * 3.2;
} else if (strcmp (codigo_produto, "QRST") == 0){
    divida = quantidade * 2.5;
} 

printf ("\n\nO valor total da dívida é R$: %.2f\n", divida);
}