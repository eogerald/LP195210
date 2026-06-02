/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Seu Nome>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : DD/MM/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char A[1010], B[1010];

    scanf("%d", &N);

    while (N--) {
        scanf("%s %s", A, B);

        int lenA = strlen(A);
        int lenB = strlen(B);

        if (lenB > lenA) {
            printf("nao encaixa\n");
        } else {
            int encaixa = 1;

            for (int i = 0; i < lenB; i++) {
                if (A[lenA - lenB + i] != B[i]) {
                    encaixa = 0;
                    break;
                }
            }

            if (encaixa)
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
        }
    }

    return 0;
}
