#include <stdio.h>

int main() {
    int num, numInicial, numDigitos;

    printf("Insira um numero:");
    scanf("%d", &num);

    numInicial = num;
    numDigitos = 1;

    if (num < 0) {
        num *= -1;
    }

    while (num / 10 >= 1) {
        numDigitos += 1;
        num /= 10;
    }

    printf("O numero %d possui %d digitos!\n", numInicial, numDigitos);
}