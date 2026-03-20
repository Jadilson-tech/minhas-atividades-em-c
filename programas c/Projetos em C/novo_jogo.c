#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Informação: Cabeçalho do jogo
    printf("***********************************\n");
    printf("*  JOGO DE ADIVINHAÇÃO EM C!      *\n");
    printf("***********************************\n\n");

    // Informação: inicializa o gerador de números aleatórios usando o tempo
    srand(time(NULL));

    // Informação: gera um número secreto entre 0 e 99
    int numeroSecreto = rand() % 100;

    int chute;            // Informação: armazena o chute do jogador
    int tentativas = 0;   // Informação: conta quantas tentativas foram usadas
    int maxTentativas;    // Informação: limite de tentativas baseado no nível
    int nivel;            // Informação: nível de dificuldade escolhido
    double pontos = 1000; // Informação: pontuação inicial do jogador

    // Informação: menu de dificuldade
    printf("Escolha o nível de dificuldade:\n");
    printf("1 - Fácil (20 tentativas)\n");
    printf("2 - Médio (15 tentativas)\n");
    printf("3 - Difícil (6 tentativas)\n");
    printf("Opção: ");
    scanf("%d", &nivel);

    // Informação: define o número máximo de tentativas
    if (nivel == 1)
        maxTentativas = 20;
    else if (nivel == 2)
        maxTentativas = 15;
    else
        maxTentativas = 6;

    // Informação: loop principal do jogo
    for (int i = 1; i <= maxTentativas; i++) {

        printf("\nTentativa %d de %d\n", i, maxTentativas);

        // Informação: jogador digita o chute
        printf("Digite seu chute: ");
        scanf("%d", &chute);

        // Informação: impede números negativos
        if (chute < 0) {
            printf("Número inválido! Tente novamente.\n");
            i--;
            continue;
        }

        tentativas++;

        // Informação: verifica se o jogador acertou
        if (chute == numeroSecreto) {
            printf("\n Você acertou!\n");
            printf("Tentativas usadas: %d\n", tentativas);
            printf("Pontuação final: %.1f\n", pontos);
            return 0; // Informação: encerra o jogo se acertar
        }

        // Informação: dá dica se o número é maior ou menor
        if (chute > numeroSecreto)
            printf("Seu chute foi MAIOR que o número secreto.\n");
        else
            printf("Seu chute foi MENOR que o número secreto.\n");

        // Informação: calcula perda de pontos baseada na diferença do chute
        pontos -= abs(chute - numeroSecreto) / 2.0;
    }

    // Informação: mensagem caso o jogador perca
    printf("\n Você perdeu! O número secreto era %d\n", numeroSecreto);

    return 0; // Informação: fim do programa
}