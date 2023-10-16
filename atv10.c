#include <stdio.h>

int main() {
    double vetorX[5], vetorY[5];
    double produtoEscalar = 0.0;

    printf("Digite os 5 valores do primeiro conjunto (vetor X):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &vetorX[i]);
    }

    printf("Digite os 5 valores do segundo conjunto (vetor Y):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &vetorY[i]);
    }

    for (int i = 0; i < 5; i++) {
        produtoEscalar += vetorX[i] * vetorY[i];
    }

    printf("Vetor X: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2lf ", vetorX[i]);
    }
    printf("\n");

    printf("Vetor Y: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2lf ", vetorY[i]);
    }
    printf("\n");

    printf("Produto Escalar: %.2lf\n", produtoEscalar);

    return 0;
}