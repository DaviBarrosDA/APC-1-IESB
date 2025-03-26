#include <stdio.h>
    int main() {
        char tecla;
        
        printf("Pressione uma tecla e depois ENTER: ");
        scanf("%c", &tecla); // tecla = 'a';
        getchar(); // ler o /n da anterior
        printf("Voce pressionou a tecla %c\n", tecla);
        scanf("%c", &tecla); // tecla = 'a';
        getchar(); // ler o /n da anterior
        printf("Voce pressionou a tecla %c\n", tecla);
        scanf("%c", &tecla); // tecla = 'a';
        getchar(); // ler o /n da anterior
        printf("Voce pressionou a tecla %c\n", tecla);
        scanf("%c", &tecla); // tecla = 'a';leitura 
        getchar(); // ler o /n da anterior
        printf("Voce pressionou a tecla %c\n", tecla);

        return 0;
    }