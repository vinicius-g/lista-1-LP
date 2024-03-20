#include <stdio.h>

int main() {
    float media_aprovacao = 7.0, media_aluno;
    printf("Infome a media do aluno:");
    scanf("%f", &media_aluno);
    if (media_aluno >= media_aprovacao) {
        printf("Aluno aprovado!\n\n");
    } else {
        printf("Aluno reprovado!\n\n");
    }
}