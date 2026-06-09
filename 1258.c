/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Jefferson Gerald Pinto
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 12/05/2026
Objetivo    : Esse é um problema clássico de ordenar registros com múltiplos critérios em C
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char cor[10];
    char tamanho;
} Camiseta;

int valorCor(char cor[]) {
    if (strcmp(cor, "branco") == 0) return 0;
    return 1; // vermelho
}

int valorTamanho(char t) {
    if (t == 'G') return 2;
    if (t == 'M') return 1;
    return 0; // P
}

int main() {
    int N;
    Camiseta v[60];
    int caso = 0;

    while (scanf("%d", &N) && N != 0) {

        for (int i = 0; i < N; i++) {
            scanf(" %[^\n]", v[i].nome);
            scanf("%s %c", v[i].cor, &v[i].tamanho);
        }

        // Bubble sort
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {

                int c1 = valorCor(v[j].cor);
                int c2 = valorCor(v[j + 1].cor);

                int t1 = valorTamanho(v[j].tamanho);
                int t2 = valorTamanho(v[j + 1].tamanho);

                int troca = 0;

                if (c1 > c2) troca = 1;
                else if (c1 == c2 && t1 < t2) troca = 1;
                else if (c1 == c2 && t1 == t2 &&
                         strcmp(v[j].nome, v[j + 1].nome) > 0)
                    troca = 1;

                if (troca) {
                    Camiseta temp = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = temp;
                }
            }
        }

        if (caso > 0) printf("\n");

        for (int i = 0; i < N; i++) {
            printf("%s %c %s\n", v[i].cor, v[i].tamanho, v[i].nome);
        }

        caso++;
    }

    return 0;
}
