/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Jefferson Gerald Pinto
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 11/06M/2026
Objetivo    : A ideia é que cada posição da matriz recebe um valor igual à sua distância da borda mais próxima, somada de 1.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    int N;

    while (cin >> N && N != 0) {

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {

                int valor = min(min(i, j), min(N - 1 - i, N - 1 - j)) + 1;

                if (j == 0)
                    cout << setw(3) << valor;
                else
                    cout << " " << setw(3) << valor;
            }
            cout << '\n';
        }

        cout << '\n';
    }

    return 0;
}
