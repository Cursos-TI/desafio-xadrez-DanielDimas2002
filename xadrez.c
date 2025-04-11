#include <stdio.h>

int main() {
    // ============================
    // MOVIMENTO DA TORRE (for)
    // ============================
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ============================
    // MOVIMENTO DO BISPO (while)
    // ============================
    int casas_bispo = 1;
    printf("Movimento do Bispo:\n");
    while (casas_bispo <= 5) {
        printf("Cima Direita\n");
        casas_bispo++;
    }

    printf("\n");

    // ============================
    // MOVIMENTO DA RAINHA (do-while)
    // ============================
    int casas_rainha = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        casas_rainha++;
    } while (casas_rainha <= 8);

    printf("\n");

    // ============================
    // MOVIMENTO DO CAVALO (for + while)
    // ============================
    // O Cavalo fará 2 movimentos para Baixo e 1 para Esquerda, formando um "L"
    printf("Movimento do Cavalo:\n");

    // Loop externo: movimento de 2 casas para baixo (obrigatoriamente for)
    for (int i = 1; i <= 2; i++) {
        printf("Baixo\n");

        // Loop interno: só executa na segunda vez (quando i == 2)
        // Responsável por uma casa para a esquerda
        if (i == 2) {
            int j = 0;
            while (j < 1) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}
