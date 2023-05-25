#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    printf("Digite 5 números inteiros:\n");

    // Lendo os números do usuário e armazenando no vetor
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Os números digitados foram:\n");

    // Exibindo os números do vetor
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
