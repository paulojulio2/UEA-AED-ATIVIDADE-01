
#include <stdio.h>

int main() {
    char str[] = "Hello"; // Array de caracteres estático
    char *ptr = "World"; // Ponteiro para caracteres

    printf("%s ", str); // Imprime "Hello"
    printf("%s\n", ptr); // Imprime "World"

    // Acessando e modificando caracteres com ponteiros
    *(str + 2) = 'P';
    *(ptr + 1) = 'A';

    printf("%s ", str); // Imprime "HePlo"
    printf("%s\n", ptr); // Imprime "PALd"

    return 0;
}
