#include <stdio.h>

int main() {
    int num, div, primo;

    printf("Verifique se um numero e primo:");
    do {
        scanf("%d", &num);
        if (num < 1) {
            printf("Informe um numero maior que 0! \nVerifique se um numero e primo:");
        }
    } while (num < 1);

    primo = 1;

    for (div = num - 1; div > 2; div--) {
        if (num % div == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) {
        printf("O numero %d e primo!", num);
    } else {
        printf("O numero %d nao e primo!", num);
    }
}