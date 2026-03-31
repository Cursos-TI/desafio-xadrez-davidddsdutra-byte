#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
// Nível Mestre - Funções Recursivas e Loops Aninhados

void Torre(int t) {
    if (t <= 0) return;
    printf("Direita\n");
    Torre(t - 1);
}

void Rainha(int r) {
    if (r <= 0) return;
    printf("Esquerda\n");
    Rainha(r - 1);
}

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
      printf("\n=== Movimentação da Torre ===\n");
        Torre(5);
    //int i = 1
    //while (i <= 5) {
    //    printf("%d: Direita\n", i);
    //    i++;

    //}



    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
       printf("\n=== Movimentação da Rainha ===\n");
         Rainha(5);
    //int y = 1;
    //do {
    //    printf("%d: Esquerda\n", y);
    //    y++;
    //} while (y  <= 5);






    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
         printf("\n=== Movimentação do Cavalo ===\n");
                  for (int c = 1, d = 0; c <= 3; c++) {
                 
                 if (c <= 2) {
                     printf("Cima \n");
                     continue;
                }
                  while (d < 1) {
                         printf("Direita\n");
                         d++;

                            break;  
                  }
        }
        
    
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
    }
