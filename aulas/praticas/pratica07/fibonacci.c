#include <stdio.h>

int main() {
    int n, anterior = 0, proximo = 1, auxiliar;

    printf("Digite quantos numeros da serie Fibonacci deseja ver: ");
    scanf("%i", &n);

    printf("Serie de Fibonacci: ");
    for(int i = 0; i < n; i++) {
        printf("%i ", proximo);
        auxiliar = proximo;
        proximo = anterior + proximo;
        anterior = auxiliar;
    }
    printf("\n");

    return 0;
}