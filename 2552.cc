/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : jefferson gerald pinto
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 13/06/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;

    while (cin >> N >> M) {
        vector<vector<int>> mat(N, vector<int>(M));

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> mat[i][j];
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (mat[i][j] == 1) {
                    cout << 9;
                } else {
                    int cont = 0;

                    if (i > 0 && mat[i - 1][j] == 1) cont++;     
                    if (i < N - 1 && mat[i + 1][j] == 1) cont++;  
                    if (j > 0 && mat[i][j - 1] == 1) cont++;      
                    if (j < M - 1 && mat[i][j + 1] == 1) cont++;  

                    cout << cont;
                }
            }
            cout << '\n';
        }
    }

    return 0;
}
