#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
// Nível Mestre - Funções Recursivas e Loops Aninhados


// Bispo com Recursividade
void BispoRecursivo(int passos, int movimento) {
    if (movimento > passos) return;
    printf("%d: Cima + Direita\n", movimento);
    BispoRecursivo(passos, movimento + 1);
}

// Bispo com Loops Aninhados
void BispoLoops(int passos) {
    // Loop externo para movimento vertical
    for (int i = 1; i <= passos; i++) {
        // Loop interno para movimento horizontal
        for (int j = 1; j <= 1; j++) {
            printf("%d: Cima + Direita\n", i);
        }
    }
}

int main() {
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf("=== Movimentação do Bispo (Recursividade) ===\n");
    BispoRecursivo(5, 1);

    printf("\n=== Movimentação do Bispo (Loops Aninhados) ===\n");
    BispoLoops(5);



    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
         // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
 
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
    }
