/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : jefferson gerald pinto
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 17/05/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>

int main() {
    int N;
    // Lê o número de casos de teste
    if (scanf("%d", &N) == 1) {
        while (N--) {
            int X;
            scanf("%d", &X);
            
            // Se X for 64, 2^64 - 1 estoura os limites se calculado de forma puramente inteira.
            // Usamos pow() que trabalha com double para evitar o overflow imediato.
            // Em seguida, fazemos a divisão para converter grãos -> gramas -> kg.
            unsigned long long kg = (unsigned long long)(pow(2, X) / 12 / 1000);
            
            // Imprime o resultado no formato solicitado
            printf("%llu kg\n", kg);
        }
    }
    return 0;
}
