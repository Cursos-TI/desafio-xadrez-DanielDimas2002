#include <stdio.h>

// ==========================
// Função recursiva da Torre
// ==========================
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// ==========================
// Função recursiva da Rainha
// ==========================
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ==========================
// Função recursiva do Bispo
// ==========================
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// ==========================
// Movimento com loops aninhados do Bispo
// ==========================
void moverBispoComLoops(int casas) {
    printf("Movimento alternativo do Bispo (usando loops aninhados):\n");

    for (int vertical = 1; vertical <= casas; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }

    printf("\n");
}

// ==========================
// Movimento complexo do Cavalo com loops aninhados
// ==========================
void moverCavalo() {
    printf("Movimento do Cavalo (Cima Cima Direita):\n");

    int passos_cima = 2;
    int passos_direita = 1;

    // Loop externo para cima
    for (int i = 1; i <= passos_cima; i++) {
        if (i == 2) {
            // Após subir duas vezes, movimenta para a direita
            int j = 0;
            while (j < passos_direita) {
                printf("Direita\n");
                j++;
            }
        }

        // Se ainda não chegou no segundo passo para cima, continue
        if (i < passos_cima) {
            printf("Cima\n");
            continue;
        }

        // Última subida
        printf("Cima\n");
    }

    printf("\n");
}

// ==========================
// Função principal
// ==========================
int main() {
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // -------------------------
    // Torre
    // -------------------------
    printf("Movimento da Torre:\n");
    moverTorre(casas_torre);
    printf("\n");

    // -------------------------
    // Bispo (recursivo)
    // -------------------------
    printf("Movimento do Bispo:\n");
    moverBispo(casas_bispo);
    printf("\n");

    // -------------------------
    // Rainha
    // -------------------------
    printf("Movimento da Rainha:\n");
    moverRainha(casas_rainha);
    printf("\n");

    // -------------------------
    // Cavalo
    // -------------------------
    moverCavalo();

    // -------------------------
    // Bispo (versão com loops aninhados)
    // -------------------------
    moverBispoComLoops(5);

    return 0;
}
