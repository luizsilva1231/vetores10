#include <stdio.h>

int main() {
    int vetor[10];
    int u1[10], v2[10]; 
    int count_u1 = 0, count_v2 = 0;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            v2[count_v2] = vetor[i];
            count_v2++;
        } else {
            u1[count_u1] = vetor[i];
            count_u1++;
        }
    }

    printf("Elementos UTILIZADOS de u1 (ímpares):\n");
    for (int i = 0; i < count_u1; i++) {
        printf("%d ", u1[i]);
    }
    printf("\n");

    printf("Elementos UTILIZADOS de v2 (pares):\n");
    for (int i = 0; i < count_v2; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

    return 0;
}