#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    char frase[] = "PLAGIO E CRIME";
    int i;
    int quantidade = 0;

    // Percorre cada caractere da frase
    for(i = 0; i < strlen(frase); i++) {

        // Verifica se o caractere é uma letra
        if(isalpha(frase[i])) {
            quantidade++;   // conta apenas letras
        }
    }

    printf("Frase: %s\n", frase);
    printf("Quantidade de letras: %d\n", quantidade);

    return 0;
}