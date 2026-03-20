#include <stdio.h>
#include <string.h>

int main() {

    char cidade[50];   // variável para armazenar a cidade
    char nome[50];     // variável para armazenar o nome do aluno
    float distancia = 2268.0; // distância exemplo

    // Pergunta a cidade do usuário
    printf("Qual a sua cidade? ");
    fgets(cidade, 50, stdin);

    // Pergunta o nome do usuário
    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin);

    // Mostra o resultado
    printf("\nA distancia entre %s e Mossoro/RN e de %.1f quilometros.\n", cidade, distancia);
    printf("Meu nome e %s", nome);

    return 0;
}