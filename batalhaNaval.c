#include <stdio.h>

/*
  Desafio Batalha Naval - MateCheck
  Níveis:
  - Novato: Matriz 5x5, dois navios (um vertical, um horizontal)
  - Aventureiro: Matriz 10x10, quatro navios (incluindo dois na diagonal)
  - Mestre: Matrizes para habilidades especiais (cone, cruz, octaedro)
*/

#define TAM_NOVATO 5
#define TAM_AVENTUREIRO 10

// Função para exibir um tabuleiro qualquer (usada para todas as visualizações)
void exibeTabuleiro(int linhas, int colunas, int tabuleiro[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // --- NÍVEL NOVATO ---
    printf("=== NÍVEL NOVATO ===\n");
    int tabuleiroNovato[TAM_NOVATO][TAM_NOVATO] = {0};

    // Navio vertical (tamanho 3) em coluna 1, linhas 1 a 3
    for (int i = 1; i <= 3; i++) {
        tabuleiroNovato[i][1] = 3;
        printf("Navio vertical em (%d, %d)\n", i, 1);
    }
    // Navio horizontal (tamanho 3) em linha 3, colunas 2 a 4
    for (int j = 2; j <= 4; j++) {
        tabuleiroNovato[3][j] = 3;
        printf("Navio horizontal em (%d, %d)\n", 3, j);
    }
    printf("Tabuleiro Novato:\n");
    exibeTabuleiro(TAM_NOVATO, TAM_NOVATO, tabuleiroNovato);

    // --- NÍVEL AVENTUREIRO ---
    printf("\n=== NÍVEL AVENTUREIRO ===\n");
    int tabuleiroAventureiro[TAM_AVENTUREIRO][TAM_AVENTUREIRO] = {0};

    // Navio vertical (tamanho 4) em coluna 2, linhas 0 a 3
    for (int i = 0; i < 4; i++) {
        tabuleiroAventureiro[i][2] = 3;
        printf("Navio vertical em (%d, %d)\n", i, 2);
    }
    // Navio horizontal (tamanho 4) em linha 6, colunas 4 a 7
    for (int j = 4; j < 8; j++) {
        tabuleiroAventureiro[6][j] = 3;
        printf("Navio horizontal em (%d, %d)\n", 6, j);
    }
    // Navio diagonal principal (tamanho 4) de (5,5) a (8,8)
    for (int k = 0; k < 4; k++) {
        tabuleiroAventureiro[5+k][5+k] = 3;
        printf("Navio diagonal principal em (%d, %d)\n", 5+k, 5+k);
    }
    // Navio diagonal secundária (tamanho 4) de (3,7) a (6,4)
    for (int k = 0; k < 4; k++) {
        tabuleiroAventureiro[3+k][7-k] = 3;
        printf("Navio diagonal secundaria em (%d, %d)\n", 3+k, 7-k);
    }
    printf("Tabuleiro Aventureiro:\n");
    exibeTabuleiro(TAM_AVENTUREIRO, TAM_AVENTUREIRO, tabuleiroAventureiro);

    // --- NÍVEL MESTRE ---
    printf("\n=== NÍVEL MESTRE ===\n");

    // Cone (matriz 5x5)
    int cone[5][5] = {0};
    for (int i = 0; i < 3; i++)         // linhas
        for (int j = 0; j < 5; j++)     // colunas
            if (j >= 2-i && j <= 2+i)
                cone[i][j] = 1;
    printf("Habilidade Cone:\n");
    exibeTabuleiro(3, 5, cone);

    // Octaedro (matriz 3x5) - mesmo padrão do cone, mas só as pontas
    int octaedro[3][5] = {0};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            if ((i == 0 && j == 2) ||
                (i == 1 && (j == 1 || j == 2 || j == 3)) ||
                (i == 2 && j == 2))
                octaedro[i][j] = 1;
    printf("\nHabilidade Octaedro:\n");
    exibeTabuleiro(3, 5, octaedro);

    // Cruz (matriz 3x5)
    int cruz[3][5] = {0};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            if (i == 1 || j == 2)
                cruz[i][j] = 1;
    printf("\nHabilidade Cruz:\n");
    exibeTabuleiro(3, 5, cruz);

    return 0;
}#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
