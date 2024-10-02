#include <stdio.h>

#define TAMANHO 5 // Certifique-se de definir o tamanho

void selecao (int *v)
{
    int i,j,aux, minimo, pos_minimo;
    for (i=0; i < TAMANHO-1; i++)
    {
        minimo = v[i];
        pos_minimo = i;
        for (j=i+1; j < TAMANHO; j++) // Passo 1 
        {
            if (minimo > v[j])
            {
                minimo = v[j];
                pos_minimo = j;
            }
        }
        if (pos_minimo != i)  // Passo 2
        {
            aux = v[pos_minimo];
            v[pos_minimo] = v[i];
            v[i] = aux;
        }
    }
}

int main() 
{
    int v[TAMANHO] = {64, 25, 12, 22, 11}; // Vetor de exemplo

    selecao(v);

    printf("Vetor ordenado: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}