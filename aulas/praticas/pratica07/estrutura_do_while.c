#include <stdio.h>

int main() {
    int nota;

    do {
        printf("Digite uma nota entre 1 e 10: ");
        scanf("%i", &nota);
        
        if(nota < 1 || nota > 10) {
            printf("Nota invalida. Tente novamente!\n");
        }
    } while(nota < 1 || nota > 10);

    printf("Nota valida: %i\n", nota);

    return 0;
}