#include <stdio.h>
#include <math.h>

int main() {
    int xInicial, yInicial, xFinal, yFinal, distanciaX, distanciaY;
    double distanciaTotal;

    printf("Informe as coordenadas iniciais!\n");

    printf("Informe x inicial:");
    scanf("%d", &xInicial);
    printf("Informe y inicial:");
    scanf("%d", &yInicial);

    printf("Informe as coordenadas finais!\n");

    printf("Informe x final:");
    scanf("%d", &xFinal);
    printf("Informe y final:");
    scanf("%d", &yFinal);

    if (xInicial > xFinal) {
        distanciaX = (xInicial * xInicial) - (2 * xInicial * xFinal) + (xFinal * xFinal);
    } else {
        distanciaX = (xFinal * xFinal) - (2 * xInicial * xFinal) + (xInicial * xInicial);
    }

    if (yInicial > yFinal) {
        distanciaY = (yInicial * yInicial) - (2 * yInicial * yFinal) + (yFinal * yFinal);
    } else {
        distanciaY = (yFinal * yFinal) - (2 * yInicial * yFinal) + (yInicial * yInicial);
    }

    distanciaTotal = distanciaX + distanciaY;
    distanciaTotal = sqrt(distanciaTotal);

    printf("A distancia entre as coordenadas (%d, %d) e (%d, %d): %.2f \n", xInicial, yInicial, xFinal, yFinal, distanciaTotal);
}