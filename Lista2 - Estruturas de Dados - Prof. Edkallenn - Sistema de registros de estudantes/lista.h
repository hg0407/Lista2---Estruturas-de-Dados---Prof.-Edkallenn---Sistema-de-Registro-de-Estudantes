/*
** Função : Implementação das operações da Lista Encadeada
** Autor : Hygor Alves
** Data : 04/06/2024
** Observações:
*/
#ifndef LISTA_H
#define LISTA_H

#include "estudante.h"

typedef struct No {
    Estudante estudante;
    struct No* proximo;
} No;

typedef struct {
    No* inicio;
} Lista;

void inicializarLista(Lista* lista);
void adicionarEstudante(Lista* lista, Estudante estudante);
void removerEstudante(Lista* lista, int matricula);
Estudante* buscarEstudante(Lista* lista, int matricula);

#endif
