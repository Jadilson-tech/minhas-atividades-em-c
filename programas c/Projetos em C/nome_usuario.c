#include <stdio.h>
#include <string.h>
#include <ctype.h>   // biblioteca para verificar caracteres

int main() {

    char nome[100];
    int i;
    int quantidade = 0;

    // Recebe o nome completo do usuário
    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);

    // Percorre toda a string digitada
    for(i = 0; i < strlen(nome); i++) {

        // Verifica se o caractere é uma letra
        if(isalpha(nome[i])) {
            quantidade++;   // soma apenas se for letra
        }
    }

    printf("\nQuantidade de letras no nome: %d\n", quantidade);

    printf("Numeros entre 0 e 100 com a mesma quantidade:\n");

    // Percorre os números de 0 até 100
    for(i = 0; i <= 100; i++) {

        // Se o número for igual à quantidade de letras
        if(i == quantidade) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}