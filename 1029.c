/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : jefferson gerald pinto
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 13/05/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int calls;

int fib(int n) {
    calls++;  // conta TODAS as chamadas

    if (n == 0) return 0;
    if (n == 1) return 1;

    return fib(n - 1) + fib(n - 2);
}

int main() {
    int N, x;

    scanf("%d", &N);

    while (N--) {
        scanf("%d", &x);

        calls = 0;
        int result = fib(x);

        printf("fib(%d) = %d calls = %d\n", x, calls - 1, result);
    }

    return 0;
}
