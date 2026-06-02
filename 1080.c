/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Jefferson Gerald
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 26/03/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int valor, maior, posicao;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &valor);

        if (i == 1 || valor > maior) {
            maior = valor;
            posicao = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}
