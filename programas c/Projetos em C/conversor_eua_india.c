#include <stdio.h>

int main() {

    float dolar;
    float cotacao;
    float rupia;

    printf("=== Conversor USD -> Rupia Indiana ===\n");

    // receber valor em dolar
    printf("Digite o valor em dolar (USD): ");
    scanf("%f", &dolar);

    // receber cotação do dia
    printf("Digite a cotacao do dia (1 USD em INR): ");
    scanf("%f", &cotacao);

    // conversão
    rupia = dolar * cotacao;

    // resultado
    printf("\nValor em dolar: %.2f USD\n", dolar);
    printf("Cotacao do dia: %.2f INR\n", cotacao);
    printf("Valor em Rupia Indiana: %.2f INR\n", rupia);

    return 0;
}