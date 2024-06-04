/*
** Função : Definição do TAD Fila para Matrículas em Disciplinas
** Autor : Hygor Alves
** Data :04/06/2024
** Observações:
*/

#ifndef FILA_H
#define FILA_H

#include "estudante.h"

typedef struct NoFila {
    Estudante estudante;
    struct NoFila* proximo;
} NoFila;

typedef struct {
    NoFila* frente;
    NoFila* tras;
} Fila;

void inicializarFila(Fila* fila);
void adicionarFila(Fila* fila, Estudante estudante);
Estudante* removerFila(Fila* fila);

#endif
