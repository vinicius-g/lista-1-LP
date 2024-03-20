#include <stdio.h>

int main() {
    float cel, fah;
    printf("Insira um valor em graus Celsius:");
    scanf("%f", &cel);
    fah = (cel * 9.0f / 5.0f) + 32.0f;
    printf("%.2f graus celsius equivalem a %.2f fahrenheit. \n\n", cel, fah);
}