#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int chave;
    struct No *filho_esquerdo;
    struct No *filho_direito;
} No;

int busca_arvore(int chave, No *ptr) {
    if (ptr == NULL) 
        return 0; // chave não encontrada (árvore vazia ou chegou a uma folha)

    if (ptr->chave == chave)
        return 1; // chave encontrada
    else if (chave < ptr->chave)
        return busca_arvore(chave, ptr->filho_esquerdo); // busca no filho esquerdo
    else
        return busca_arvore(chave, ptr->filho_direito); // busca no filho direito
}

// Função principal para teste
int main() {
    // Criação manual de uma árvore binária de exemplo
    No *raiz = malloc(sizeof(No));
    raiz->chave = 10;
    raiz->filho_esquerdo = malloc(sizeof(No));
    raiz->filho_direito = malloc(sizeof(No));

    raiz->filho_esquerdo->chave = 5;
    raiz->filho_esquerdo->filho_esquerdo = NULL;
    raiz->filho_esquerdo->filho_direito = NULL;

    raiz->filho_direito->chave = 15;
    raiz->filho_direito->filho_esquerdo = NULL;
    raiz->filho_direito->filho_direito = NULL;

    int chave_a_buscar = 15;
    if (busca_arvore(chave_a_buscar, raiz))
        printf("Chave %d encontrada!\n", chave_a_buscar);
    else
        printf("Chave %d não encontrada!\n", chave_a_buscar);

    // Liberação de memória
    free(raiz->filho_esquerdo);
    free(raiz->filho_direito);
    free(raiz);

    return 0;
}