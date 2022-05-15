#include <stdio.h>

int main() {
    double nota1, nota2, media;
    scanf("%lf %lf", &nota1, &nota2);
    media = ((nota1 * 2) + (nota2 * 3)) / 5;
    printf("Média final é %.1lf\n", media);
    if ( media >= 7.0 ) {
        printf("Aluno aprovado!\n");
    }
    else {
        printf("Aluno em recuperação!\n");
    }
    return 0;
}