#include <stdio.h>   // Biblioteca para entrada e saída (printf, scanf)
#include <string.h>  // Biblioteca para manipulação de strings

int main() {

    int D;           // Variável que vai guardar o número inteiro digitado
    int A = 0;       // Variável que vai guardar a quantidade de letras do nome
    char nome[100];  // Vetor de caracteres para armazenar nome e sobrenome

    // Solicita ao usuário um número inteiro positivo
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &D);   // Guarda o valor digitado dentro da variável D

    getchar(); // Limpa o ENTER que ficou no buffer do teclado

    // Solicita o nome completo
    printf("Digite seu nome e sobrenome: ");
    fgets(nome, sizeof(nome), stdin);  
    // fgets lê uma linha inteira (inclusive espaços)

    // Percorre cada caractere da string
    for(int i = 0; nome[i] != '\0'; i++) {

        // Se o caractere NÃO for espaço e NÃO for quebra de linha
        if(nome[i] != ' ' && nome[i] != '\n') {
            A++;  // Conta como letra
        }
    }

    // Exibe a soma entre D e A
    printf("Resultado da soma (D + A): %d\n", D + A);

    return 0; // Indica que o programa terminou corretamente
}