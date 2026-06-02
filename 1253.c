/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Jefferson Gerald Pinto
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 31/03/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int N, k;
    char str[60];

    scanf("%d", &N);

    while (N--) {
        scanf("%s", str);
        scanf("%d", &k);

        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = ((str[i] - 'A' - k + 26) % 26) + 'A';
        }

        printf("%s\n", str);
    }

    return 0;
}
