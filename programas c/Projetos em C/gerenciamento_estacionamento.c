#include <stdio.h>

int main() {

    char placa[10];
    int hEntrada, mEntrada;
    int hSaida, mSaida;
    int entradaMin, saidaMin;
    int tempoMin;
    float valor;

    printf("=== Estacionamento ===\n");

    // Ler placa
    printf("Digite a placa do veiculo: ");
    scanf("%s", placa);

    // Ler hora de entrada com dois pontos,recebendo assim duas variáveis
    printf("Digite a hora de entrada (hh:mm): ");
    scanf("%d:%d", &hEntrada, &mEntrada);

    // Ler hora de saída com dois pontos, recebendo duas variáveis, uma para hora e outra para minutos
    printf("Digite a hora de saida (hh:mm): ");
    scanf("%d:%d", &hSaida, &mSaida);

    // Converter tudo para minutos
    entradaMin = hEntrada * 60 + mEntrada;
    saidaMin = hSaida * 60 + mSaida;

    // Calcular tempo estacionado
    tempoMin = saidaMin - entradaMin;

    // Calcular valor (R$5 por hora)
    valor = (tempoMin / 60.0) * 5;

    // Mostrar resultado
    printf("\nPlaca: %s\n", placa);
    printf("Tempo estacionado: %.2f horas\n", tempoMin / 60.0);
    printf("Valor a pagar: R$ %.2f\n", valor);

    return 0;
}