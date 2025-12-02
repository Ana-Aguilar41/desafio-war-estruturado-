#ifndef TERRITORIOS_H
#define TERRITORIOS_H

typedef struct {
    char nome[50];
    char cor[20];
    int tropas;
} Territorio;

void cadastrarTerritorios(Territorio *t, int qtd);
void listarTerritorios(Territorio *t, int qtd);

#endif
