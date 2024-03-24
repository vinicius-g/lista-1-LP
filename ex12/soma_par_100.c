#include <stdio.h>

int main() {
    int somaTotal, contador;

    for (contador = 1; contador <= 100; contador++) {
        if (contador % 2 == 0) {
            somaTotal += contador;
        }
    }

    printf("A soma total de todos os pares de 1 a 100: %d \n", somaTotal);
}