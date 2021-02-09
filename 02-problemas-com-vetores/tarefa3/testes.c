#include <stdio.h>
#include <stdlib.h>

#include "../../macros_correcoes.h"
#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d2-t3"


void conta_repeticoes(int *vec, int n);


void conta_repeticoes_certo(int *vec, int n) {
    int *contagem = malloc(sizeof(int) * n);
    memset(contagem, 0, sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        if (contagem[i] != 0) continue;

        int el = vec[i];
        int vezes = 1;
        for (int j = i+1; j < n; j++) {
            if (vec[j] == el) {
                vezes++;
                contagem[j] = 1;
            }
        }
        printf("%d aparece %d vez", el, vezes);
        if (vezes > 1) printf("es");
        printf("\n");
    }
}

int main() {
    {
        int vec[] = {1, 3, 0, 1, 5, 7, 0, 1, 3};
        int N = sizeof(vec)/sizeof(int);
        rodaESalvaSaida(conta_repeticoes_certo(vec, N), "teste1-certo");
        rodaESalvaSaida(conta_repeticoes(vec, N), "teste1-aluno");

        int passou = system("diff teste1-certo teste1-aluno > /dev/null" );
        assertEquals("{1, 3, 0, 1, 5, 7, 0, 1, 3}, veja arquivos teste1-*", passou, 0);
        if (passou == 0) {
            unlink("teste1-certo");
            unlink("teste1-aluno");
        }
    }

    {
        int vec[] = {0, 1, 0, 1, 0, 1, 1, 1, 1, 0};
        int N = sizeof(vec)/sizeof(int);
        rodaESalvaSaida(conta_repeticoes_certo(vec, N), "teste2-certo");
        rodaESalvaSaida(conta_repeticoes(vec, N), "teste2-aluno");

        int passou = system("diff teste2-certo teste2-aluno > /dev/null" );
        assertEquals("{0, 1, 0, 1, 0, 1, 1, 1, 1, 0}, veja arquivos teste2-*", passou, 0);
        if (passou == 0) {
            unlink("teste2-certo");
            unlink("teste2-aluno");
        }
    }

    {
        int vec[] = {1, 0, 0, 0, 0, 0, -1, 1};
        int N = sizeof(vec)/sizeof(int);
        rodaESalvaSaida(conta_repeticoes_certo(vec, N), "teste3-certo");
        rodaESalvaSaida(conta_repeticoes(vec, N), "teste3-aluno");

        int passou = system("diff teste3-certo teste3-aluno > /dev/null" );
        assertEquals("{1, 0, 0, 0, 0, 0, -1, 1}, veja arquivos teste3-*", passou, 0);
        if (passou == 0) {
            unlink("teste3-certo");
            unlink("teste3-aluno");
        }
    }

    {
        int vec[] = {1, 2, 34, 5, 4, 3,2, 12, 6, 4,1, 4,2};
        int N = sizeof(vec)/sizeof(int);
        rodaESalvaSaida(conta_repeticoes_certo(vec, N), "teste4-certo");
        rodaESalvaSaida(conta_repeticoes(vec, N), "teste4-aluno");

        int passou = system("diff teste4-certo teste4-aluno > /dev/null" );
        assertEquals("{1, 2, 34, 5, 4, 3,2, 12, 6, 4,1, 4,2}, veja arquivos teste4-*", passou, 0);
        if (passou == 0) {
            unlink("teste4-certo");
            unlink("teste4-aluno");
        }
    }

    printSummary

    #include "../../telemetry.c"
}