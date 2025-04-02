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

        char nome [31];
        printf("Entre com o seu nome: ");
        scanf("%[^\n]s", nome);
        printf("Vc digitou %s\n", nome);
        return 0;
    }