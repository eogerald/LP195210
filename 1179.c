/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Jefferson Gerald Pinto
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 09/05/2026
Objetivo    : Esse problema exige dois vetores de tamanho 5 (par e ímpar) que vão sendo reutilizados sempre que enchem.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int par[5], impar[5];
    int i_par = 0, i_impar = 0;
    int valor;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            par[i_par++] = valor;

            if (i_par == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                i_par = 0;
            }
        } else {
            impar[i_impar++] = valor;

            if (i_impar == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                i_impar = 0;
            }
        }
    }

    // primeiro os ímpares restantes
    for (int j = 0; j < i_impar; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }

    // depois os pares restantes
    for (int j = 0; j < i_par; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
