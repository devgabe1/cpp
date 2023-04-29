#include <stdio.h>
int main(){

int num[20];

for (int i = 0; i < 20; i++){
    printf ("\nInsira um valor:");
    scanf ("%i", &num[i]);
}

printf ("\n\nValores:\n");

for (int i = 0; i < 20; i++){
    printf ("%i\n", num[i]);
}

printf ("\n\nValores invertidos:\n");

for (int i = 19; i >= 0; i--){
    printf ("%i\n", num[i]);
}
return 0;
}