/*
** Função : Implementação das operações do Deque para Lista de Espera de Atendimento
** Autor : Hygor Alves
** Data : 04/06/2024
** Observações:
*/
#include "deque.h"
#include <stdlib.h>

void inicializarDeque(Deque* deque) {
    deque->inicio = NULL;
    deque->fim = NULL;
}

void adicionarInicioDeque(Deque* deque, Estudante estudante) {
    NoDeque* novoNo = (NoDeque*)malloc(sizeof(NoDeque));
    if (!novoNo) return;
    novoNo->estudante =
