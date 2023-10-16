#include <stdio.h>

int main() {
    int tamanho = 10;
    int numeros[tamanho];

    printf("Digite 10 números:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Valores iguais:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (numeros[i] == numeros[j]) {
                printf("%d\n", numeros[i]);
            }
        }
    }

    return 0;
}