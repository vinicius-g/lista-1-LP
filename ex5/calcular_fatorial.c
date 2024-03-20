#include <stdio.h>

int main() {
    int num, fat;
    printf("Insira um numero:");
    scanf("%d", &num);

    if (num < 0) {
        printf("O numero nao pode ser negativo!");
        return 0;
    }

    if (num > 0) {
        fat = num;
    }

    if (num == 0) {
        fat = 1;
    }

    for (int contador = num; contador > 1; contador--) {
        num = num - 1;
        fat = fat * num;
    }

    printf("O fatorial de %d equivale a: %d", num, fat);
}