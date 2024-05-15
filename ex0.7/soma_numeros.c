#include <stdio.h>

int main() {
    int num, numInicial, somaTotal = 0;
    printf("Insira um numero natural:");

    do {
        scanf("%d", &num);
        if (num < 0) {
            printf("Informe um numero maior que 0:\n");
        }
    } while(num < 0);

    numInicial = num;

    while (num > 0) {
        somaTotal = somaTotal + num;
        num--;
    }

    printf("A soma dos %d primeiros numeros naturais equivale a: %d", numInicial, somaTotal);
}