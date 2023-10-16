#include <stdio.h>

int main() {
    int primeiroVetor[10];
    int segundoVetor[10];
    int count = 0;

    printf("Digite 10 números inteiros no intervalo [0, 50]:\n");
    for (int i = 0; i < 10; i++) {
        int num;
        do {
            printf("Número %d: ", i + 1);
            scanf("%d", &num);
        } while (num < 0 || num > 50); 

        primeiroVetor[i] = num;
    }

    for (int i = 0; i < 10; i++) {
        if (primeiroVetor[i] % 2 != 0) {
            segundoVetor[count] = primeiroVetor[i];
            count++;
        }
    }

    printf("Primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", primeiroVetor[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    printf("\nSegundo vetor (apenas ímpares do primeiro vetor):\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", segundoVetor[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    return 0;
}