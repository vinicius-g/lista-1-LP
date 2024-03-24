#include <stdio.h>

int main() {
    int minutos, minutosIniciais, horas;

    printf("Informe uma quantidade de minutos:");
    do {
        scanf("%d", &minutos);
        if (minutos < 0) {
            printf("Os minutos devem ser positivos! \nInforme uma quantidade de minutos:");
        }
    } while (minutos < 0);

    minutosIniciais = minutos;
    horas = 0;

    while (minutos / 60 >= 1) {
        horas += 1;
        minutos -= 60;
    };

    printf("%d minutos equivalem a %02dh e %02dm\n", minutosIniciais, horas, minutos);
}