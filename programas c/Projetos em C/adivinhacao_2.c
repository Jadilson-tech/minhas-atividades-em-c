#include <stdio.h>

int main() {

    int numero_secreto = 42;
    int tentativas = 5;
    int chute;

    printf("*********************************************************\n");
    printf(" Bem vindo ao nosso jogo de adivinhacoes\n");
    printf(" Voce tera %d tentativas para acertar o numero secreto\n", tentativas);
    printf("*********************************************************\n");

    while (tentativas > 0) {

        printf("\nDigite seu chute: ");
        scanf("%d", &chute);

        if (chute < 0) {
            printf("Numero negativo nao pode!\n");
            continue;
        }

        if (chute == numero_secreto) {
            printf("Voce acertou!\n");
            break;
        }
        else if (chute < numero_secreto) {
            printf("O numero secreto e MAIOR\n");
        }
        else {
            printf("O numero secreto e MENOR\n");
        }

        tentativas--;
        printf("Tentativas restantes: %d\n", tentativas);
    }

    if (tentativas == 0) {
        printf("\nVoce perdeu! O numero era %d\n", numero_secreto);
    }

    return 0;
}