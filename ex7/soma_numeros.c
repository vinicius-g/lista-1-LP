#include <stdio.h>

int main() {
    int num, numInicial, somaTotal = 0;
    printf("Insira um numero:");
    scanf("%d", &num);

    numInicial = num;

    while (num > 0) {
        somaTotal = somaTotal + num;
        num--;
    }

    printf("A soma dos %d numeros naturais equivale a: %d", numInicial, somaTotal);
}