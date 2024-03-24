#include <stdio.h>

int main() {
    float capital, taxaJurosAnual, juros, montante;
    int tempoInvestimento;

    printf("Informe o capital inicial:");
    do {
        scanf("%f", &capital);
        if (capital <= 0) {
            printf("O capital informado deve ser maior que R$ 0! \nInforme o capital inicial:");
        }
    } while(capital <= 0);

    printf("Informe a taxa de juros anual:");
    do {
        scanf("%f", &taxaJurosAnual);
        if (taxaJurosAnual <= 0) {
            printf("A taxa de juros anual informada deve maior que 0! \nInforme a taxa de juros anual:");
        }
    } while (taxaJurosAnual <= 0);

    printf("Informe o tempo de investimento em anos:");
    do {
        scanf("%d", &tempoInvestimento);
        if (tempoInvestimento < 1) {
            printf("O tempo de investimento deve ser maior que 0! \nInforme o tempo de investimento em anos:");
        }
    } while (tempoInvestimento < 1);

    juros = capital * taxaJurosAnual * (float)tempoInvestimento;
    montante = capital + juros;

    if (tempoInvestimento > 1) {
        printf("Em %d anos, com juros de %.2f%%, o capital de R$ %.2f se tornara o montante de %.2f", tempoInvestimento, taxaJurosAnual * 100,  capital, montante);
    } else {
        printf("Em %d ano, com juros de %.2f%%, o capital de R$ %.2f se tornara o montante de %.2f", tempoInvestimento, taxaJurosAnual * 100,  capital, montante);
    }
}