#include <stdio.h>

int main() {
    float num;
    printf("Insira um numero:");
    scanf("%f", &num);
    num = num*num*num;
    printf("%.2f ao cubo equivale a: %.2f", num, num);
}