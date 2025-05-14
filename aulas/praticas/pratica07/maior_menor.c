#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Digite numeros inteiros (0 para parar): ");
    scanf("%i", &numero);
    
    maior = numero;
    menor = numero;

    while(numero != 0) {
        if(numero > maior) {
            maior = numero;
        }
        if(numero < menor) {
            menor = numero;
        }
        scanf("%i", &numero);
    }

    printf("Maior numero: %i\n", maior);
    printf("Menor numero: %i\n", menor);

    return 0;
}