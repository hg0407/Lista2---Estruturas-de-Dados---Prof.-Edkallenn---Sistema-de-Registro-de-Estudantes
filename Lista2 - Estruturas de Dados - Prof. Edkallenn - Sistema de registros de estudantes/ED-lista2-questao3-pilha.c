/*
** Função : Implementação das operações da Pilha para Históricos de Notas
** Autor : Hygor Alves
** Data : 04/06/2024
** Observações:
*/
#include "pilha.h"

void inicializarPilha(Pilha* pilha) {
    pilha->topo = -1;
}

void atualizarHistorico(Pilha* pilha, Estudante estudante) {
    if (pilha->topo < MAX_HISTORICO - 1) {
        pilha->topo++;
        pilha->historico[pilha->topo] = estudante;
    } else {
        // Histórico cheio, remover o mais antigo e adicionar no topo
        for (int i = 0; i < MAX_HISTORICO - 1; i++) {
            pilha->historico[i] = pilha->historico[i + 1];
        }
        pilha->historico[MAX_HISTORICO - 1] = estudante;
    }
}
