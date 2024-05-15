#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;

    printf("Informe o coeficiente a:");

    do
    {
        scanf("%f", &a);
        if (a == 0)
        {
            printf("O coeficiente a nao pode ser 0! \n Informe o coeficiente a:");
        }
    } while (a == 0);

    printf("Informe o coeficiente b:");
    scanf("%f", &b);

    printf("Informe o coeficiente c:");
    scanf("%f", &c);

    delta = (b * b) - 4.0f * a * c;

    if (delta < 0) {
        printf("Nao existem raizes reais!");
    } else {
        x1 = ((b * -1.0f) + sqrtf(delta)) / (2.0f * a);

        if (delta == 0) {
            x2 = x1;
        } else {
            x2 = ((b * -1.0f) - sqrtf(delta)) / (2.0f * a);
        }

        printf("As raizes sao: %.2f e %.2f \n", x1, x2);
    }
}