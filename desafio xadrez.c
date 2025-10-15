#include <stdio.h>

int main() {
    // ============================================================
    // Declaração de variáveis e constantes
    // ============================================================
    const int casasTorre = 5;   // Torre move 5 casas
    const int casasBispo = 5;   // Bispo move 5 casas
    const int casasRainha = 8;  // Rainha move 8 casas

    // ============================================================
    // Movimento do BISPO
    // Estrutura: WHILE
    // Movimento: Diagonal superior direita (Cima, Direita)
    // ============================================================
    printf("=== Movimento do BISPO ===\n");
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita (%d casa)\n", contadorBispo);
        contadorBispo++;
    }

    // ============================================================
    // Movimento da TORRE
    // Estrutura: FOR
    // Movimento: 5 casas para a direita
    // ============================================================
    printf("\n=== Movimento da TORRE ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    // ============================================================
    // Movimento da RAINHA
    // Estrutura: DO-WHILE
    // Movimento: 8 casas para a esquerda
    // ============================================================
    printf("\n=== Movimento da RAINHA ===\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda (%d casa)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // ============================================================
    // Fim da simulação
    // ============================================================
    printf("\nSimulação concluída com sucesso!\n");

    return 0;
}