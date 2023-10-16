#include <stdio.h>

int main() {
    int vetor[10];
    int numero, contador = 0;

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número para encontrar seus múltiplos: ");
    scanf("%d", &numero);

    printf("Múltiplos de %d no vetor:\n", numero);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % numero == 0) {
            printf("%d ", vetor[i]);
            contador++;
        }
    }

    if (contador == 0) {
        printf("Nenhum múltiplo de %d encontrado no vetor.\n", numero);
    }

    return 0;
}