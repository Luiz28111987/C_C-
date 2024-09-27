#include <stdio.h>
#include <stdlib.h>

typedef struct departamento {
        int cod;
        char descricao[30];
} Departamento;

typedef struct cargo {
        int cod;
        char descricao[30];
} Cargo;

typedef struct funcionario {
        int cod;
        char nome[30];
        float salario;
        Departamento depto;
        Cargo cargo;
} Funcionario;

int main(void) {
        Funcionario funcionarios[100]; // Supondo um vetor com 100 funcionários
        int indice = 0; // Índice do funcionário que queremos imprimir

        // ... (inicialização dos dados dos funcionários)

        printf("\n TEXTO %s", funcionarios[indice].nome);

        return 0;
}
