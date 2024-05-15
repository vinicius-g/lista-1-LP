#include <stdio.h>

int main() {
    float lado1, lado2, lado3, tipoTriangulo;

    printf("Insira o tamanho do primeiro lado de um triangulo:");
    do {
        scanf("%f", &lado1);
        if (lado1 <= 0) {
            printf("O tamanho precisa ser maior que 0! \nInsira o tamanho do primeiro lado de um triangulo:");
        }
    } while (lado1 <= 0);

    printf("Insira o tamanho do segundo lado de um triangulo:");
    do {
        scanf("%f", &lado2);
        if (lado2 <= 0) {
            printf("O tamanho precisa ser maior que 0! \nInsira o tamanho do segundo lado de um triangulo:");
        }
    } while (lado2 <= 0);

    printf("Insira o tamanho do terceiro lado de um triangulo:");
    do {
        scanf("%f", &lado3);
        if (lado3 <= 0) {
            printf("O tamanho precisa ser maior que 0! \nInsira o tamanho do terceiro lado de um triangulo:");
        }
    } while (lado3 <= 0);

    if (lado1 + lado2 > lado3 && lado2 + lado3 > lado1 && lado1 + lado3 > lado2) {
        tipoTriangulo = (lado1 * lado1) + (lado2 * lado2) - (lado3 * lado3);

        if (tipoTriangulo > 0) {
            printf("O triangulo com lados: %.2f, %.2f, %.2f e um triangulo acutangulo!\n", lado1, lado2, lado3);
        } else if (tipoTriangulo < 0) {
            printf("O triangulo com lados: %.2f, %.2f, %.2f e um triangulo obtusangulo!\n", lado1, lado2, lado3);
        } else {
            printf("O triangulo com lados: %.2f, %.2f, %.2f e um triangulo retangulo!\n", lado1, lado2, lado3);
        }
    } else {
        printf("O triangulo nao pode existir com esses tamanhos!\n");
    }
}