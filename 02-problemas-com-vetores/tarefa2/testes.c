#include <stdio.h>
#include <stdlib.h>

#include "../../macros_correcoes.h"
#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d2-t2"

int maior_soma(int *vec, int n);

int ordem(int *a, int *b) {
    return *b - *a;
}

int maior_soma_certo(int *vec, int n) {
    int *vecopia = malloc(sizeof(int) * n);
    memcpy(vecopia, vec, sizeof(int) * n);
    qsort(vecopia, n, sizeof(int), (__compar_fn_t) ordem);
    int r = vecopia[0] + vecopia[1];
    free(vecopia);
    return r;
}

int main() {
    {
        int vec[] = {12, 3, 4, 12};
        int N = sizeof(vec) / sizeof(int);

        int res_aluno = maior_soma (vec, N);
        int res_certa = maior_soma_certo(vec, N);
        char msg[1000];
        sprintf(msg, "{12, 3, 4, 12} Esperado: %d Recebido %d", res_certa, res_aluno);
        assertEquals(msg, res_aluno, res_certa);
    }

    {
        int vec[] = {-1, -10, -5, -111, 0};
        int N = sizeof(vec) / sizeof(int);

        int res_aluno = maior_soma (vec, N);
        int res_certa = maior_soma_certo(vec, N);
        char msg[1000];
        sprintf(msg, "{-1, -10, -5, -111, 0} Esperado: %d Recebido %d", res_certa, res_aluno);
        assertEquals(msg, res_aluno, res_certa);
    }

    {
        int vec[] = {1, 2};
        int N = sizeof(vec) / sizeof(int);

        int res_aluno = maior_soma (vec, N);
        int res_certa = maior_soma_certo(vec, N);
        char msg[1000];
        sprintf(msg, "{1, 2} Esperado: %d Recebido %d", res_certa, res_aluno);
        assertEquals(msg, res_aluno, res_certa);
    }

    {
        int vec[] = {2, 1};
        int N = sizeof(vec) / sizeof(int);

        int res_aluno = maior_soma (vec, N);
        int res_certa = maior_soma_certo(vec, N);
        char msg[1000];
        sprintf(msg, "{2, 1} Esperado: %d Recebido %d", res_certa, res_aluno);
        assertEquals(msg, res_aluno, res_certa);
    }

    {
        int N = 1000;
        int *vec = malloc(sizeof(int) *N);
        
        for (int i = 0; i < N; i++) {
            vec[i] = rand() / 1024;
        }

        int res_aluno = maior_soma (vec, N);
        int res_certa = maior_soma_certo(vec, N);
        char msg[1000];
        sprintf(msg, "Teste grande aleatório Esperado: %d Recebido %d", res_certa, res_aluno);
        assertEquals(msg, res_aluno, res_certa);

        free(vec);
    }

    printSummary
    
    #include "../../telemetry.c"

    return 0;
}