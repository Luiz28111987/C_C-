#include <stdio.h>

#define TAMANHO 5 // Certifique-se de definir o tamanho

void insertion (int *v)
{
    int i,j,aux;
    for (i=0; i < TAMANHO-1; i++)
    {
        j = i + 1;
        
        while (v[j-1]>v[j] && j > 0)
        {
            aux = v[j-1];
            v[j-1]=v[j];
            v[j]=aux;
            j--;
        }
    }
}

int main() 
{
    int v[TAMANHO] = {64, 25, 12, 22, 11}; // Vetor de exemplo

    insertion(v);

    printf("Vetor ordenado: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}