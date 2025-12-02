#ifndef MISSOES_H
#define MISSOES_H

typedef struct {
    char descricao[100];
} Missao;

Missao *gerarMissao();
void mostrarMissao(Missao *m);
void liberarMissao(Missao *m);

#endif
