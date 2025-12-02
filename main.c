#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "territorios.h"
#include "combate.h"
#include "missoes.h"

int main() {
    srand(time(NULL));

    int qtd;
    printf("Quantos territórios deseja cadastrar? ");
    scanf("%d", &qtd);

    Territorio *t = malloc(qtd * sizeof(Territorio));

    cadastrarTerritorios(t, qtd);
    listarTerritorios(t, qtd);

    // Gera missão
    Missao *m = gerarMissao();
    mostrarMissao(m);

    // Demonstração de ataque entre os dois primeiros territórios (se existirem)
    if(qtd >= 2) {
        atacar(&t[0], &t[1]);
    }

    liberarMissao(m);
    free(t);

    return 0;
}
