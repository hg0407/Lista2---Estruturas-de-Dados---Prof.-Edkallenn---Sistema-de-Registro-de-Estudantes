/*
** Função : Implementação das operações da Fila para Matrículas em Disciplinas
** Autor : Hygor Alves
** Data :04/06/2024
** Observações:
*/

#include "fila.h"
#include <stdlib.h>

void inicializarFila(Fila* fila) {
    fila->frente = NULL;
    fila->tras = NULL;
}

void adicionarFila(Fila* fila, Estudante estudante) {
    NoFila* novoNo = (NoFila*)malloc(sizeof(NoFila));
    if (!novoNo) return;
    novoNo->estudante = estudante;
    novoNo->proximo = NULL;
    if (fila->frente == NULL) {
        fila->frente = novoNo;
    } else {
        fila->tras->proximo = novoNo;
    }
    fila->tras = novoNo;
}

Estudante* removerFila(Fila* fila) {
    if (fila->frente == NULL) return NULL;
    NoFila* temp = fila->frente;
    Estudante* estudante = &(temp->estudante);
    fila->frente = fila->frente->proximo;
    free(temp);
    return estudante;
}
