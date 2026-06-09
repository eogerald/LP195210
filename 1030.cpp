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
#include <vector>

using namespace std;


int josephus(int n, int k) {
    int posicao = 0; // Caso base para 1 pessoa (indexação 0)
    
    
    for (int i = 2; i <= n; ++i) {
        posicao = (posicao + k) % i;
    }
    

}

int main() {
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int nc;
    if (cin >> nc) {
        for (int caso = 1; caso <= nc; ++caso) {
            int n, k;
            cin >> n >> k;
            
            int sobrevivente = josephus(n, k);
            
            
            cout << "Case " << caso << ": " << sobrevivente << "\n";
        }
    }
    
    return 0;
}
