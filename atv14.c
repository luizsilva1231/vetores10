#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num <= 3) {
        return 1; 
    }
    if (num % 2 == 0) {
        return 0; 
    }

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Elementos primos e suas posições no vetor:\n");

    for (int i = 0; i < 10; i++) {
        if (isPrime(vetor[i])) {
            printf("Elemento: %d (Posição: %d)\n", vetor[i], i);
        }
    }

    return 0;
}