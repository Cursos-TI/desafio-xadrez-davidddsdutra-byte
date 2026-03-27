#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

int main() {
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
           printf("=== Movimentação do Bispo ===\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d: Cima + Direita \n", i);
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
      printf("\n=== Movimentação da Torre ===\n");
    int i = 1;
    while (i <= 5) {
        printf("%d: Direita\n", i);
        i++;

    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
       printf("\n=== Movimentação da Rainha ===\n");
    int y = 1;
    do {
        printf("%d: Esquerda\n", y);
        y++;
    } while (y  <= 5);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
         printf("\n=== Movimentação do Cavalo ===\n");
                for (int x = 1; x <= 2; x++) {
                    printf("Cima \n");
                }
                 int j = 1;
                    while (j <= 1) {
                         printf("Direita\n");
                         j++;
        }
        
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
