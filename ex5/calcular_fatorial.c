#include <stdio.h>

int main() {
    int num, fat, contador;
    printf("Insira um numero:");

    do {
        scanf("%d", &num);
        if (num < 0) {
            printf("O numero nao pode ser negativo!\n Digite outro numero:");
        }
    } while(num < 0);

    fat = 1;

    for (contador = num; contador > 1; contador--) {
        fat = fat * contador;
    }

    printf("O fatorial de %d equivale a: %d", num, fat);
}