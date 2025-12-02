#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "combate.h"

// Simula dados (1 a 6)
int rolarDado() {
    return rand() % 6 + 1;
}

void atacar(Territorio *atacante, Territorio *defensor) {
    if(atacante->tropas <= 1) {
        printf("\nO território atacante precisa ter mais de 1 tropa!\n");
        return;
    }

    printf("\n=== ATAQUE ===\n");
    printf("%s (A) VS %s (D)\n", atacante->nome, defensor->nome);

    int dadoA = rolarDado();
    int dadoD = rolarDado();

    printf("Dado atacante: %d\n", dadoA);
    printf("Dado defensor: %d\n", dadoD);

    if(dadoA > dadoD) {
        defensor->tropas--;
        printf("Atacante venceu! Tropa do defensor -1\n");
    } else {
        atacante->tropas--;
        printf("Defensor venceu! Tropa do atacante -1\n");
    }
}
