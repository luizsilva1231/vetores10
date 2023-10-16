#include <stdio.h>

int main() {
    int numeroAluno;
    float altura, alturaMaisBaixa, alturaMaisAlta;
    int numeroMaisBaixo, numeroMaisAlto;

    printf("Digite o número do primeiro aluno: ");
    scanf("%d", &numeroAluno);
    printf("Digite a altura do primeiro aluno (em metros): ");
    scanf("%f", &altura);

    alturaMaisBaixa = altura;
    alturaMaisAlta = altura;
    numeroMaisBaixo = numeroAluno;
    numeroMaisAlto = numeroAluno;

    for (int i = 2; i <= 10; i++) {
        printf("Digite o número do %dº aluno: ", i);
        scanf("%d", &numeroAluno);
        printf("Digite a altura do %dº aluno (em metros): ", i);
        scanf("%f", &altura);

        if (altura < alturaMaisBaixa) {
            alturaMaisBaixa = altura;
            numeroMaisBaixo = numeroAluno;
        }
        if (altura > alturaMaisAlta) {
            alturaMaisAlta = altura;
            numeroMaisAlto = numeroAluno;
        }
    }
    printf("Aluno mais baixo: Número %d, Altura %.2f metros\n", numeroMaisBaixo, alturaMaisBaixa);
    printf("Aluno mais alto: Número %d, Altura %.2f metros\n", numeroMaisAlto, alturaMaisAlta);

    return 0;
}