#include <stdio.h>

int main() {
    int num, numQuadrado = 0;
    printf("Insira um numero:");
    scanf("%d", &num);

    for (int contador = num; contador > 0; contador--) {
        numQuadrado = numQuadrado + num;
    }

    printf("%d ao quadrado equivale a: %d\n", num, numQuadrado);
}