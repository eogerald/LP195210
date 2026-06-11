/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : jefferson gerald pinto
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 11/06/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <iostream>

using namespace std;

int main() {
    int N[20];

    for (int i = 0; i < 20; i++) {
        cin >> N[i];
    }

    for (int i = 0; i < 10; i++) {
        int aux = N[i];
        N[i] = N[19 - i];
        N[19 - i] = aux;
    }

    for (int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}
