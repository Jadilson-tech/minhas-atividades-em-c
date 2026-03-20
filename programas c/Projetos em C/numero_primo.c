#include <stdio.h>

int main() {

    int i, j, primo, soma = 0;

    for(i = 2; i <= 50; i++) {

        primo = 1;

        for(j = 2; j <= i-1; j++) {

            if(i % j == 0) {
                primo = 0;
                break;
            }

        }

        if(primo == 1) {
            printf("%d ", i);
            soma = soma + i;
        }

    }

    printf("\nSoma dos numeros primos = %d\n", soma);

    return 0;
}