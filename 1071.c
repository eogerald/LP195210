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
    int X, Y, soma = 0;

    scanf("%d", &X);
    scanf("%d", &Y);

    int inicio = (X < Y) ? X : Y;
    int fim = (X > Y) ? X : Y;

    for (int i = inicio + 1; i < fim; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}
