#include <stdio.h>

int main() {
    int num, numQuadrado = 0, contador;
    printf("Insira um numero:");
    scanf("%d", &num);

    if (num < 0) {
        num = num * -1;
    }

    for (contador = num; contador > 0; contador--) {
        numQuadrado = numQuadrado + num;
    }

    printf("%d ao quadrado equivale a: %d\n", num, numQuadrado);
}