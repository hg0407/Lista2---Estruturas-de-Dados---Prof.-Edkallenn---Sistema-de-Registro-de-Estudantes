/*
** Função : Definição do TAD Deque para Lista de Espera de Atendimento
** Autor : Hygor Alves
** Data :04/06/2024
** Observações:
*/
#ifndef DEQUE_H
#define DEQUE_H

#include "estudante.h"

typedef struct NoDeque {
    Estudante estudante;
    struct NoDeque* anterior;
    struct NoDeque* proximo;
} NoDeque;

typedef struct {
    NoDeque* inicio;
    NoDeque* fim;
} Deque;

void inicializarDeque(Deque* deque);
void adicionarInicioDeque(Deque* deque, Estudante estudante);
void adicionarFimDeque(Deque* deque, Estudante estudante);
Estudante* removerInicioDeque(Deque* deque);
Estudante* removerFimDeque(Deque* deque);

#endif
