#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "missoes.h"

Missao *gerarMissao() {
    Missao *m = (Missao *) malloc(sizeof(Missao));

    int escolha = rand() % 3;

    switch(escolha) {
        case 0:
            strcpy(m->descricao, "Conquistar 3 territórios.");
            break;
        case 1:
            strcpy(m->descricao, "Eliminar um jogador da cor Azul.");
            break;
        case 2:
            strcpy(m->descricao, "Controlar América do Sul e Ásia.");
            break;
    }

    return m;
}

void mostrarMissao(Missao *m) {
    printf("\n=== MISSÃO RECEBIDA ===\n");
    printf("%s\n", m->descricao);
}

void liberarMissao(Missao *m) {
    free(m);
}
