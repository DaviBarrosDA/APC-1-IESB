#include <stdio.h>

int main(){
    int numero = 0;


    printf("Entre com um numero inteiro entre 1 e 10: ");
    scanf("%i", &numero);

    printf("A tabuada de %i eh\n", numero);
    //printf("1 X %i = %i\n", numero, 1 * numero);
    //printf("2 X %i = %i\n", numero, 2 * numero);
    //printf("3 X %i = %i\n", numero, 3 * numero);
    //printf("4 X %i = %i\n", numero, 4 * numero);
    //printf("5 X %i = %i\n", numero, 5 * numero);
    //printf("6 X %i = %i\n", numero, 6 * numero);
    //printf("7 X %i = %i\n", numero, 7 * numero);
    //printf("8 X %i = %i\n", numero, 8 * numero);
    //printf("9 X %i = %i\n", numero, 9 * numero);
    //printf("10 X %i = %i\n", numero, 10 * numero);

    for(int i = 1; i <= 100000; i++) {
        printf("%i x %i = %i\n", i, numero, i * numero);
    }

    for(int  i=10; i >= 1; i--) { // 10 a 1
        printf("%i x %i = %i\n", i, numero, i * numero);
    }

    for(int i=1; i > 0; i++) {
        printf("Ao infinito e alem!\n");
    }
    return 0;
}