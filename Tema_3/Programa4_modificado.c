#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    char buffer[10]; // Buffer para armazenar a entrada

    printf("Digite um numero inteiro: ");
    fgets(buffer, sizeof(buffer), stdin);

    // Converter a string para um número inteiro
    if (sscanf(buffer, "%d", &i) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    printf("Voce digitou: %d\n", i);
    return 0;
}