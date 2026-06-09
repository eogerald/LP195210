/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Jefferson Gerald Pinto
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 03/05/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int calcularDuracao(int inicio, int fim) {
    if (inicio == fim) {
        return 24;
    } 
    else if (fim > inicio) {
        return fim - inicio;
    } 
    else {
        return (24 - inicio) + fim;
    }
}

int main() {
    int inicio, fim;

    scanf("%d %d", &inicio, &fim);

    int duracao = calcularDuracao(inicio, fim);

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
