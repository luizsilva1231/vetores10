#include <stdio.h>
#include <math.h>

int main() {
    int n = 10; 
    double vetor[10];
    double media = 0.0;
    double somaQuadradosDiferencas = 0.0;
    double desvioPadrao;

    printf("Digite os 10 números do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &vetor[i]);
        media += vetor[i];
    }

    media /= n;

    for (int i = 0; i < n; i++) {
        somaQuadradosDiferencas += pow(vetor[i] - media, 2);
    }

    desvioPadrao = sqrt(somaQuadradosDiferencas / n);

    printf("A média dos números no vetor é: %.2lf\n", media);
    printf("O desvio padrão dos números no vetor é: %.2lf\n", desvioPadrao);

    return 0;
}