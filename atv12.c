#include <stdio.h>

int main() {
    int vetor[100];
    int count = 0;
    int num = 1;

    while (count < 100) {
        if (num % 7 != 0 && num % 10 != 7) {
            vetor[count] = num;
            count++;
        }
        num++;
    }

    printf("Os primeiros 100 naturais que não são múltiplos de 7 ou não terminam com 7 são:\n");

    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}