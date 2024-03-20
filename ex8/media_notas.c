#include <stdio.h>

int main() {
    float media1 = 0, media2 = 0, media3 = 0, media4 = 0, media5 = 0, mediaGeral;
    printf("Infome a media 1:");
    scanf("%f", &media1);
    printf("Infome a media 2:");
    scanf("%f", &media2);
    printf("Infome a media 3:");
    scanf("%f", &media3);
    printf("Infome a media 4:");
    scanf("%f", &media4);
    printf("Infome a media 5:");
    scanf("%f", &media5);

    mediaGeral = (media1 + media2 + media3 + media4 + media5) / 5;

    printf("A media das notas: %.2f, %.2f, %.2f, %.2f, %.2f, equivale a: %.2f", media1, media2, media3, media4, media5, mediaGeral);
}