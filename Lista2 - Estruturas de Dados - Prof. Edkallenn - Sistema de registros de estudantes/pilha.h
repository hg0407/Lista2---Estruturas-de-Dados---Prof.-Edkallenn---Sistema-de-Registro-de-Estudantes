/*
** Função : Implementação das operações da Pilha para Históricos de Notas
** Autor : Hygor Alves
** Data :04/06/2024
** Observações:
*/
#ifndef PILHA_H
#define PILHA_H

#include "estudante.h"

#define MAX_HISTORICO 10

typedef struct {
    Estudante historico[MAX_HISTORICO];
    int topo;
} Pilha;

void inicializarPilha(Pilha* pilha);
void atualizarHistorico(Pilha* pilha, Estudante estudante);

#endif
