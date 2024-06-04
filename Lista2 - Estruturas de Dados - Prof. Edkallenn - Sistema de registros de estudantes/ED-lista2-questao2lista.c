/*
** Função : Implementação das operações da Lista Encadeada
** Autor : Hygor Alves
** Data :04/06/2024
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void inicializarLista(Lista* lista) {
    lista->inicio = NULL;
}

void adicionarEstudante(Lista* lista, Estudante estudante) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (!novoNo) return;
    novoNo->estudante = estudante;
    novoNo->proximo = lista->inicio;
    lista->inicio = novoNo;
}

void removerEstudante(Lista* lista, int matricula) {
    No* atual = lista->inicio;
    No* anterior = NULL;

    while (atual != NULL) {
        if (atual->estudante.matricula == matricula) {
            if (anterior == NULL) {
                lista->inicio = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }
            free(atual);
            return;
        }
        anterior = atual;
        atual = atual->proximo;
    }
}

Estudante* buscarEstudante(Lista* lista, int matricula) {
    No* atual = lista->inicio;
    while (atual != NULL) {
        if (atual->estudante.matricula == matricula) {
            return &(atual->estudante);
        }
        atual = atual->proximo;
    }
    return NULL;
}
