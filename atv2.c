#include <stdio.h>

int main() {
    int tamanho = 20;
    int vetor[tamanho];

    printf("Digite 20 números inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int unicos[tamanho]; 
    int numElementosUnicos = 0;

    for (int i = 0; i < tamanho; i++) {
        int repetido = 0;
        for (int j = 0; j < numElementosUnicos; j++) {
            if (vetor[i] == unicos[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            unicos[numElementosUnicos] = vetor[i];
            numElementosUnicos++;
        }
    }

    printf("Elementos únicos:\n");
    for (int i = 0; i < numElementosUnicos; i++) {
        printf("%d ", unicos[i]);
    }

    return 0;
}