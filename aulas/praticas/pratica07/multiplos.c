#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero para listar seus multiplos entre 1 e 100: ");
    scanf("%i", &numero);

    printf("Multiplos de %i entre 1 e 100:\n", numero);
    for(int i = 1; i < 101; i++) {
        if(i % numero == 0) {
            printf("%i ", i);
        }
    }
    printf("\n");

    return 0;
}