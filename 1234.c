/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Seu Nome>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 31/03/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[60];
    int upper = 1; // começa com maiúscula

    while (fgets(str, sizeof(str), stdin) != NULL) {
        upper = 1;

        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == '\n') continue;

            if (str[i] == ' ') {
                printf(" ");
            } else {
                if (upper) {
                    printf("%c", toupper(str[i]));
                } else {
                    printf("%c", tolower(str[i]));
                }
                upper = !upper; // alterna só quando é letra
            }
        }

        printf("\n");
    }

    return 0;
}
