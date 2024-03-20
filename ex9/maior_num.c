#include <stdio.h>

int main() {
    float num1, num2, num3, maiorNum;
    printf("Insira o primeiro numero:");
    scanf("%f", &num1);
    maiorNum = num1;

    printf("Insira o segundo numero:");
    scanf("%f", &num2);
    if (num2 > maiorNum) {
        maiorNum = num2;
    }

    printf("Insira o terceiro numero:");
    scanf("%f", &num3);
    if (num3 > maiorNum) {
        maiorNum = num3;
    }

    printf("O maior numero entre %.2f, %.2f, %.2f e: %.2f", num1, num2, num3, maiorNum);
}