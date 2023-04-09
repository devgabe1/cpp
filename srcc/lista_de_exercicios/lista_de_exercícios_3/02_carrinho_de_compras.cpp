#include <stdio.h>
#include <string.h>

int main(){

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
	printf ("\nO total da compra será R$: %.2f", total);
	break;
	
	case 6:
	total = quantidade * 45;
	printf ("\nO total da compra será R$: %.2f", total);
	break;
	
	case 2:
	total = quantidade * 37;
	printf ("\nO total da compra será R$: %.2f", total);
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
	printf ("\nCálculo finalizado.");
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
	printf ("\nO total das duas compras será R$: %.2f", total + total2);
	break;
	
	case 6:
	total2 = quantidade * 45;
	printf ("\nO total das duas compras será R$: %.2f", total + total2);
	break;
	
	case 2:
	total2 = quantidade * 37;
	printf ("\nO total das duas compras será R$: %.2f", total + total2);
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
	printf ("\nCálculo finalizado.");
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
	printf ("\nO total das duas compras será R$: %.2f", total + total2 + total3);
	break;
	
	case 6:
	total3 = quantidade * 45;
	printf ("\nO total das duas compras será R$: %.2f", total + total2 + total3);
	break;
	
	case 2:
	total3 = quantidade * 37;
	printf ("\nO total das duas compras será R$: %.2f", total + total2 + total3);
}
}
}
}