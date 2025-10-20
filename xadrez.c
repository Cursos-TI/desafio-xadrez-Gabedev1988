#include <stdio.h>

int main() {
    // Declaração de variáveis para controlar o número de movimentos
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    
    printf("=== SIMULADOR DE MOVIMENTOS DE XADREZ ===\n\n");
    
    // 1. MOVIMENTO DA TORRE (usando FOR)
    // A Torre move-se 5 casas para a direita
    printf("1. MOVIMENTO DA TORRE - 5 casas para a DIREITA:\n");
    printf("--------------------------------------------\n");
    
    for (int i = 1; i <= casas_torre; i++) {
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");
    
    // 2. MOVIMENTO DO BISPO (usando WHILE)
    // O Bispo move-se 5 casas na diagonal (cima + direita)
    printf("2. MOVIMENTO DO BISPO - 5 casas na DIAGONAL (Cima + Direita):\n");
    printf("------------------------------------------------------------\n");
    
    int movimento_bispo = 1;
    while (movimento_bispo <= casas_bispo) {
        printf("Casa %d: Cima, Direita\n", movimento_bispo);
        movimento_bispo++; // Incrementa o contador
    }
    printf("\n");
    
    // 3. MOVIMENTO DA RAINHA (usando DO-WHILE)
    // A Rainha move-se 8 casas para a esquerda
    printf("3. MOVIMENTO DA RAINHA - 8 casas para a ESQUERDA:\n");
    printf("-------------------------------------------------\n");
    
    int movimento_rainha = 1;
    do {
        printf("Casa %d: Esquerda\n", movimento_rainha);
        movimento_rainha++; // Incrementa o contador
    } while (movimento_rainha <= casas_rainha);
    
    printf("\n=== FIM DA SIMULAÇÃO ===\n");
    
    return 0;
}