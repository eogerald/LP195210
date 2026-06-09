/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : jefferson gerald pinto
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 09/06/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <iostream>

using namespace std;


int josephus(int n, int k) {
    int posicao = 0; // Caso base para 1 pessoa (indexação 0)
    for (int i = 2; i <= n; ++i) {
        posicao = (posicao + k) % i;
    }
    return posicao + 1; // Retorna indexado em 1
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    
    
    while (cin >> n && n != 0) {
        int m = 1;
        
        while (true) {
           
            if (josephus(n - 1, m) == 12) {
                cout << m << "\n";
                break; // Encontrou o menor m, passa para o próximo caso
            }
            m++;
        }
    }
    
    return 0;
}
