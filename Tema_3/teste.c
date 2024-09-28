#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x, *y, z, temp;
    x = 5;
    y = &x;
    z = 10;
    
    printf("Digite um valor para y: ");
    fflush(stdin); // Limpa o buffer de entrada
    scanf("%d", &temp);
    *y = temp;

    printf("%d %d ", x, z);
    return 0;
}