/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : jefferson gerald pinto
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 16/05/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int encontrar_maior_recursivo(int h_atual, int maior_atual) {
    // Caso base: a sequência chegou ao fim (1)
    if (h_atual == 1) {
        return maior_atual;
    }
    
    int proximo_h;
    
    
    if (h_atual % 2 == 0) {
        proximo_h = h_atual / 2;
    } else {
        proximo_h = 3 * h_atual + 1;
    }
    
    if (proximo_h > maior_atual) {
        maior_atual = proximo_h;
    }
    
    return encontrar_maior_recursivo(proximo_h, maior_atual);
}

int main() {
    int H;
    
    
    while (scanf("%d", &H) != EOF) {
        if (H == 0) {
            break; 
        }
        
        
        int maior_numero = encontrar_maior_recursivo(H, H);
        

        printf("%d\n", maior_numero);
    }
    
    return 0;
}
