#include <stdio.h>

int main() {
    int num, fib, fibAux, fibAnt, contador;

    printf("Insira um numero:");
    do {
        scanf("%d", &num);
        if (num < 1) {
            printf("Informe um numero maior que 0! \n Insira um numero:");
        }
    } while (num < 1);

    fibAnt = 0;
    fib = 1;

    printf("%d \n", fib);
    for (contador = 1; contador < num; contador++) {
        fibAux = fib;
        fib = fib + fibAnt;
        printf("%d \n", fib);
        fibAnt = fibAux;
    }
}