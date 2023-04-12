#include <stdio.h>
int main (){

int valor_a, valor_b, valor_c, valor_d, valor_variavel;

printf ("\nApresentar valores divisíveis por 2 ou 3.\n\n");

printf ("Insira o valor de A: ");
scanf ("%d", &valor_a);

printf ("Insira o valor de B: ");
scanf ("%d", &valor_b);

printf ("Insira o valor de C: ");
scanf ("%d", &valor_c);

printf ("Insira o valode de D: ");
scanf ("%d", &valor_d);


if (valor_a % 2 == 0) {
    if (valor_a % 3 == 0){
    printf ("\nO valor A é divisível por 2 e 3.");
} else { printf ("\nO valor A é divisível apenas por 2.");
}
}
else if (valor_a % 3 == 0){
    printf ("\nO valor A é divisível apenas por 3.");
}


if (valor_b % 2 == 0){
    if (valor_b % 3 == 0){
    printf ("\nO valor B é divisível por 2 e 3.");
} else { printf ("\nO valor B é divisível apenas por 2.");
}
}
else if (valor_b % 3 == 0){
    printf ("\nO valor B é divisível apenas por 3.");
}


if (valor_c % 2 == 0){
    if (valor_c % 3 == 0){
        printf ("\nO valor C é divisível por 2 e 3.");
    } else { printf ("\nO valor C é divisível apenas por 2.");
}
}
    else if (valor_c % 3 == 0){
    printf ("\nO valor C é divisível apenas por 3.");
    }


if (valor_d % 2 == 0){
    if (valor_d % 3 == 0){
        printf ("\nO valor D é divisível por 2 e 3.");
    } else { printf ("\nO valor D é divisível apenas por 2.");
    }
    }
else if (valor_d % 3 == 0){
    printf ("\nO valor D é divisível apenas por 3.");
}
}










  
