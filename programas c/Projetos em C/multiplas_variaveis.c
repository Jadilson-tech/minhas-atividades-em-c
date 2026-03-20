#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {

    // Declaração das 8 variáveis inteiras
    int A, B, C, D, E, F, G, H;

    int menor, maior; // Variáveis para armazenar o menor e maior valor
    float media;      // Variável para armazenar a média

    // Solicita os 8 números ao usuário
    printf("Digite 8 numeros inteiros:\n");

    // Lê os valores digitados e armazena em cada variável
    scanf("%d %d %d %d %d %d %d %d",
          &A, &B, &C, &D, &E, &F, &G, &H);

    // Inicializa menor e maior com o primeiro valor (A)
    menor = A;
    maior = A;

    // Verifica número por número para descobrir o menor
    if(B < menor) menor = B;
    if(C < menor) menor = C;
    if(D < menor) menor = D;
    if(E < menor) menor = E;
    if(F < menor) menor = F;
    if(G < menor) menor = G;
    if(H < menor) menor = H;

    // Verifica número por número para descobrir o maior

    if(B > maior) maior = B;
    if(C > maior) maior = C;
    if(D > maior) maior = D;
    if(E > maior) maior = E;
    if(F > maior) maior = F;
    if(G > maior) maior = G;
    if(H > maior) maior = H;

    // Calcula a média aritmética
    // 8.0 força a divisão a ser decimal (float)
    media = (A + B + C + D + E + F + G + H) / 8.0;

    // Exibe os resultados
    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Media: %.2f\n", media);

    return 0; // Finaliza o programa
}