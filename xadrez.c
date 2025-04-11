#include <stdio.h>

int main() {
    // Simulação de movimento da TORRE usando for
    // A torre se move 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Quebra de linha para separar as peças

    // Simulação de movimento do BISPO usando while
    // O bispo se move 5 casas na diagonal para cima e à direita
    int casas_bispo = 1;
    printf("Movimento do Bispo:\n");
    while (casas_bispo <= 5) {
        printf("Cima Direita\n");
        casas_bispo++;
    }

    printf("\n");

    // Simulação de movimento da RAINHA usando do-while
    // A rainha se move 8 casas para a esquerda
    int casas_rainha = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        casas_rainha++;
    } while (casas_rainha <= 8);

    return 0;
}
