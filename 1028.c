/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : jefferson gerald pinto
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 15/05/2026
Objetivo    : Esse problema pede o maior tamanho de pilha possível que divide os dois números igualmente → ou seja, o MDC (Máximo Divisor Comum).
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int main() {
    int N, F1, F2;

    scanf("%d", &N);

    while (N--) {
        scanf("%d %d", &F1, &F2);

        printf("%d\n", mdc(F1, F2));
    }

    return 0;
}
