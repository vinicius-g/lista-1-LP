#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Informe o seu peso:");

    do {
        scanf("%f", &peso);
        if (peso <= 0) {
            printf("Informe um peso valido! \n Informe o seu peso:");
        }
    } while (peso <= 0);

    printf("Informe a sua altura:");

    do {
        scanf("%f", &altura);
        if (altura <= 0) {
            printf("Informe uma altura valida! \n Informe a sua altura:");
        }
    } while (altura <= 0);

    imc = peso / (altura * altura);

    printf("Com peso: %.2f e altura: %.2f, seu IMC equivale a: %.2f \n", peso, altura, imc);
}