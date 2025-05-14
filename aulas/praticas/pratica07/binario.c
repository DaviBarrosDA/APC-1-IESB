#include <stdio.h>

int main() {
    int numero, decimal;

    printf("Digite um numero decimal para converter para binario: ");
    scanf("%i", &numero);

    decimal = numero;
    printf("O numero %i em binario e: ", numero);

    for(int i = 128; i > 0; i = i / 2) {
        int bit = decimal / i;
        printf("%i", bit);
        decimal = decimal - bit * i;
    }
    printf("\n");

    return 0;
}