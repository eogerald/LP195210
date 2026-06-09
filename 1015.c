/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Jefferson Gerald Pinto
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 21/04/2026
Objetivo    : Esse problema pede para calcular a distância entre dois pontos no plano cartesiano usando a fórmula da distância euclidiana:
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4lf\n", distancia);

    return 0;
}
