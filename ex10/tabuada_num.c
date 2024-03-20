#include <stdio.h>

int main() {
    int num;
    printf("Insira um numero:");
    scanf("%d", &num);

    for (int contador = 1; contador <= 10; contador++) {
        printf("%d x %d = %d \n", contador, num, contador * num);
    }
}