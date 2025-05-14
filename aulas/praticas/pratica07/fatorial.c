#include <stdio.h>

int main() {
    int numero;
     int fatorial = 1;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%i", &numero);

    for(int i = numero; i > 0; i--) {
        fatorial = fatorial * i;
    }

    printf("O fatorial de %i e %i\n", numero, fatorial);

    return 0;
}