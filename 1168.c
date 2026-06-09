/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Jefferson Gerald Pinto
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 10/05/2026
Objetivo    : Esse problema é clássico de contagem de LEDs: cada dígito usa uma quantidade fixa de LEDs.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N;
    char V[101];

    scanf("%d", &N);

    while (N--) {
        scanf("%s", V);

        int total = 0;

        for (int i = 0; V[i] != '\0'; i++) {
            switch (V[i]) {
                case '0': total += 6; break;
                case '1': total += 2; break;
                case '2': total += 5; break;
                case '3': total += 5; break;
                case '4': total += 4; break;
                case '5': total += 5; break;
                case '6': total += 6; break;
                case '7': total += 3; break;
                case '8': total += 7; break;
                case '9': total += 6; break;
            }
        }

        printf("%d leds\n", total);
    }

    return 0;
}
