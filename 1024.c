/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Seu Nome>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : DD/MM/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char s[1010];

    scanf("%d", &N);
    getchar(); 

    while (N--) {
        fgets(s, sizeof(s), stdin);

        int len = strlen(s);

        
        if (s[len - 1] == '\n') {
            s[len - 1] = '\0';
            len--;
        }

        
        for (int i = 0; i < len; i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= 'A' && s[i] <= 'Z')) {
                s[i] += 3;
            }
        }

        
        for (int i = 0; i < len / 2; i++) {
            char tmp = s[i];
            s[i] = s[len - 1 - i];
            s[len - 1 - i] = tmp;
        }

        
        for (int i = len / 2; i < len; i++) {
            s[i] -= 1;
        }

        printf("%s\n", s);
    }

    return 0;
}
