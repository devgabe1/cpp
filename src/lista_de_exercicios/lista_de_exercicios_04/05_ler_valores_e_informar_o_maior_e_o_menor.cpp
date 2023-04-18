#include <stdio.h>

int main() {
    int valor, maior = 0, menor = 0;
    int primeiro = 1;

    do {
        printf("Informe um valor positivo inteiro (ou um valor negativo para sair): ");
        scanf("%d", &valor);

        if (valor >= 0) {
            if (primeiro) {
                maior = valor;
                menor = valor;
                primeiro = 0;
            } else {
                if (valor > maior) {
                    maior = valor;
                }
                if (valor < menor) {
                    menor = valor;
                }
            }
        }
    } while (valor >= 0);

    printf("O maior valor informado foi %d e o menor foi %d.", maior, menor);

    return 0;
}