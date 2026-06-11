/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : jefferson gerald pinto
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 14/06/2026
Objetivo    : menor posição
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int x, menor, pos;

    for (int i = 0; i < N; i++) {
        cin >> x;

        if (i == 0 || x < menor) {
            menor = x;
            pos = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}
