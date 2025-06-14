#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    
    int tabuleiro[10][10];

     // Inicializa o tabuleiro com 0 (água)

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // Tamanho fixo dos navios

    const int tamanho_navio = 3;

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.

    // Posiciona o navio horizontal (linha 2, colunas 1 a 3)

    int linha_horizontal = 2;
    int coluna_inicial_horizontal = 1;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_horizontal][coluna_inicial_horizontal + i] = 3;
    }

    // Posiciona o navio vertical (coluna 6, linhas 5 a 7)

    int linha_inicial_vertical = 5;
    int coluna_vertical = 6;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_inicial_vertical + i][coluna_vertical] = 3;
    }

    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    
    printf("- Bem-vindo ao Jogo de Batalha Naval -\n\n");

    printf("Coordenadas do Navio Horizontal:\n");
    for (int i = 0; i < tamanho_navio; i++) {
        printf("(%d, %d)\n", linha_horizontal, coluna_inicial_horizontal + i);
    }

    printf("\nCoordenadas do Navio Vertical:\n");
    for (int i = 0; i < tamanho_navio; i++) {
        printf("(%d, %d)\n", linha_inicial_vertical + i, coluna_vertical);
    }

    // Exibe o tabuleiro completo
    printf("\nTabuleiro (0 = água, 3 = navio):\n\n");
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
