#include <stdio.h>
#include <string.h>

int main() {
    char nomeCompleto[100]; // Variável para armazenar o nome
    int count = 0;           // Variável para contar as letras
    int num, dezena, unidade;

    // 1. Receber o nome completo do usuário
    printf("Digite seu nome completo: ");
    fgets(nomeCompleto, 100, stdin);

    // 2. Contar a quantidade de letras do nome (excluindo espaços e o caractere de nova linha)
    for (int i = 0; nomeCompleto[i] != '\0'; i++) {
        // Verifica se o caractere atual é uma letra (considerando apenas letras maiúsculas e minúsculas básicas)
        if ((nomeCompleto[i] >= 'a' && nomeCompleto[i] <= 'z') || (nomeCompleto[i] >= 'A' && nomeCompleto[i] <= 'Z')) {
            count++;
        }
    }

    printf("\nO nome possui %d letras.\n", count);

    // 3. Listar os números de 0 a 100 com a mesma quantidade de letras
    printf("\nNumeros de 0 a 100 com a mesma quantidade de letras:\n");

    for (num = 0; num <= 100; num++) {
        if (num == 100) {
            if (count == 4) { // "cem" tem 3 letras, mas no contexto do programa vamos considerar "cem" como "cem". Vamos assumir que "cem" tem 3.
                printf("100 (cem)\n");
            }
        } else if (num < 10) {
            // Unidades básicas
            char *unidades[] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};
            if (strlen(unidades[num]) == count) {
                printf("%d (%s)\n", num, unidades[num]);
            }
        } else if (num < 20) {
            // Dezenas básicas
            char *dezenas_basicas[] = {"dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
            if (strlen(dezenas_basicas[num - 10]) == count) {
                printf("%d (%s)\n", num, dezenas_basicas[num - 10]);
            }
        } else {
            // Dezenas compostas (de 20 a 99)
            dezena = num / 10;
            unidade = num % 10;

            char *dezenas[] = {"", "", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
            char *unidades[] = {"", "e um", "e dois", "e tres", "e quatro", "e cinco", "e seis", "e sete", "e oito", "e nove"};

            int tam_dezena = strlen(dezenas[dezena]);
            int tam_unidade = strlen(unidades[unidade]);

            // Se a unidade for 0, não tem "e unidade"
            if (unidade == 0) {
                if (tam_dezena == count) {
                    printf("%d (%s)\n", num, dezenas[dezena]);
                }
            } else {
                // Soma os tamanhos da dezena e da unidade composta
                if (tam_dezena + tam_unidade == count) {
                    printf("%d (%s %s)\n", num, dezenas[dezena], unidades[unidade]);
                }
            }
        }
    }

    return 0;
}