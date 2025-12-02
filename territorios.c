#include <stdio.h>
#include "territorios.h"

void cadastrarTerritorios(Territorio *t, int qtd) {
    for(int i = 0; i < qtd; i++) {
        printf("\n--- Cadastro do Território %d ---\n", i + 1);
        printf("Nome: ");
        scanf("%s", t[i].nome);

        printf("Cor do jogador: ");
        scanf("%s", t[i].cor);

        printf("Tropas iniciais: ");
        scanf("%d", &t[i].tropas);
    }
}

void listarTerritorios(Territorio *t, int qtd) {
    printf("\n=== Territórios Cadastrados ===\n");
    for(int i = 0; i < qtd; i++) {
        printf("%d) %s | Cor: %s | Tropas: %d\n",
               i + 1, t[i].nome, t[i].cor, t[i].tropas);
    }
}
