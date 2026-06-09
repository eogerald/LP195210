/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Jefferson Gerald Pinto
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 29/04/2026
Objetivo    : calcular e mostrar a quantidade de litros de combustível gastos em uma viagem
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int tempo, velocidade;
    
    scanf("%d", &tempo);
    scanf("%d", &velocidade);
    
    double litros = (tempo * velocidade) / 12.0;
    
    printf("%.3lf\n", litros);
    
    return 0;
}
