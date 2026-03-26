#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Programa de demonstração de movimentação das peças com loops e funções.
// Requisitos atendidos: entrada via constantes, repetição, saída clara, comentários detalhados.

const int BISHOP_STEPS = 5;
const int ROOK_STEPS = 5;
const int QUEEN_STEPS = 8;

void mover_bispo(int passos) {
    printf("\n=== Movimentação do Bispo (diagonal superior direita) ===\n");
    for (int i = 1; i <= passos; i++) {
        printf("Passo %d: Cima + Direita\n", i);
    }
}

void mover_torre(int passos) {
    printf("\n=== Movimentação da Torre (direita) ===\n");
    int i = 1;
    while (i <= passos) {
        printf("Passo %d: Direita\n", i);
        i++;
    }
}

void mover_rainha(int passos) {
    printf("\n=== Movimentação da Rainha (esquerda) ===\n");
    int i = 1;
    do {
        printf("Passo %d: Esquerda\n", i);
        i++;
    } while (i <= passos);
}

void mover_cavalo() {
    printf("\n=== Movimentação do Cavalo (L) ===\n");
    // O Cavalo se move 2 em uma direção e 1 na outra.
    // Em um tabuleiro reduzido, simulamos 8 possibilidades.
    const int moves = 8;
    int move = 0;

    for (int dx = -2; dx <= 2; dx++) {
        if (dx == 0) continue; // Cavalo não fica parado horizontalmente
        for (int dy = -2; dy <= 2; dy++) {
            if (dy == 0) continue; // Cavalo não fica parado verticalmente
            if (abs(dx) + abs(dy) != 3) continue; // Movimento em L
            move++;
            printf("Movimento %d: %s %s\n", move,
                   dx > 0 ? "Direita" : "Esquerda",
                   dy > 0 ? "Cima" : "Baixo");
            if (move >= moves) break; // exibe apenas as 8 possibilidades válidas
        }
        if (move >= moves) break;
    }
}

void mover_bispo_recursivo(int passo, int max_passos) {
    if (passo > max_passos) {
        return;
    }
    printf("Recursivo passo %d: Cima + Direita\n", passo);
    mover_bispo_recursivo(passo + 1, max_passos);
}

int main() {
    printf("Desafio de Xadrez - MateCheck: Nível Novato [e além]\n");

    // Nível Novato: uso de estruturas de repetição
    mover_bispo(BISHOP_STEPS);   // for
    mover_torre(ROOK_STEPS);     // while
    mover_rainha(QUEEN_STEPS);   // do-while

    // Nível Aventureiro: loops aninhados e controle
    mover_cavalo();

    // Nível Mestre: função recursiva (bispo)
    printf("\n=== Movimentação do Bispo Recursiva ===\n");
    mover_bispo_recursivo(1, BISHOP_STEPS);

    printf("\nMovimentações concluídas com sucesso.\n");
    return 0;
}
