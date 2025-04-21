
#include <stdio.h>
#include <stdlib.h>

// cria um tabuleiro 3 por 3 para o jogo da velha, cada espaço entre as aspas é onde a jogada vai ficar armazenada.
char tabuleiro[3][3];

// vai iniciar o tabuleiro com todos os espaços vazios (obs: o void serve para exibir a matriz antes de qualquer alteração).
void inicializarTabuleiro() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';
}

// vai exibir o tabuleiro na tela e também vai usar | , --- para ficar mais compreensível para nós.
void exibirTabuleiro() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// vai verificar se a posição que você escolheu para a jogada está dentro da matriz.
// também vai verificar se a posição que você escolheu não está obstruída.
// confere se não estiver obstruída, se não estiver registra o símbolo (x e o obs: pode ser alterada por meme).
// se estiver obstruída, pede para o jogador tentar novamente.
int registrarJogada(int linha, int coluna, char jogador) {
    if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ') {
        tabuleiro[linha][coluna] = jogador;
        return 1;
    }
    return 0;
}

// se o jogador tiver 3 símbolos na mesma linha, mesma coluna ou em uma diagonal mostra a mensagem que o player ganhou.
int verificarVencedor(char jogador) {
    for (int i = 0; i < 3; i++)
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador))
            return 1;

    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador))
        return 1;

    return 0;
}

// exibe o tabuleiro para compreensão.
// pergunta onde o jogador quer jogar linha/coluna.
// verifica se pode jogar ali ou não.
// se puder, adiciona no tabuleiro.
// verifica se alguém ganhou, se não ganhou passa para o próximo jogador, se ganhou encerra o tabuleiro.
// se o tabuleiro ficar lotado de símbolos sem nenhum vencedor exibe empate.
int main() {
    int linha, coluna, jogadas = 0;
    char jogador = 'X';

    inicializarTabuleiro();

    while (jogadas < 9) {
        exibirTabuleiro();
        printf("Jogador %c, informe linha e coluna (0-2): ", jogador);
        scanf("%d %d", &linha, &coluna);

        if (registrarJogada(linha, coluna, jogador)) {
            jogadas++;
            if (verificarVencedor(jogador)) {
                exibirTabuleiro();
                printf("Jogador %c venceu!\n", jogador);
                return 0;
            }
            jogador = (jogador == 'X') ? 'O' : 'X';
        } else {
            printf("Jogada inválida! Tente novamente.\n");
        }
    }

    exibirTabuleiro();
    printf("Empate!\n");
    return 0;
}