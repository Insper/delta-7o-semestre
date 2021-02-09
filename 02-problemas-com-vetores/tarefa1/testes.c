#include <stdio.h>
#include <stdlib.h>

#include "../../macros_correcoes.h"
#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d2-t1"

typedef struct {
    double peso;
    double preco;
} oferta;

int mais_barato(oferta *vec, int n);

int mais_barato_certo(oferta *vec, int n) {
    int idx_barato = 0;
    double preco_kil_barato = vec[0].preco / vec[0].peso;
    for (int i = 1; i < n; i++) {
        double preco_peso_i = vec[i].preco / vec[i].peso;
        if (preco_peso_i < preco_kil_barato) {
            idx_barato = i;
            preco_kil_barato = preco_peso_i;
        }
    }

    return idx_barato;
}

int main() {
    {
        oferta vec[] = { {.preco = 1.0, .peso=1.0}};
        int N = sizeof(vec)/sizeof(oferta);
        int res_aluno = mais_barato (vec, N);
        int res_certa = mais_barato_certo (vec, N);
        assertEquals("{ {.preco = 1.0, .peso=1.0} } ", res_aluno, res_certa);
    }

        {
        oferta vec[] = { {.preco = 1.0, .peso=1.0}, {.preco = 2.0, .peso=2.0}};
        int N = sizeof(vec)/sizeof(oferta);
        int res_aluno = mais_barato (vec, N);
        int res_certa = mais_barato_certo (vec, N);
        assertEquals("{ {.preco = 1.0, .peso=1.0}, {.preco = 2.0, .peso=2.0} } ", res_aluno, res_certa);
    }


    {
        oferta vec[] = { {.preco = 1.0, .peso=1.0}, {.preco = 1.0, .peso=1.5}, {.preco = 0.5, .peso=1.0} };
        int N = sizeof(vec)/sizeof(oferta);
        int res_aluno = mais_barato (vec, N);
        int res_certa = mais_barato_certo (vec, N);
        assertEquals("{ {.preco = 1.0, .peso=1.0}, \n{.preco = 1.0, .peso=1.5}, \n{.preco = 0.5, .peso=1.0} }", res_aluno, res_certa);
    }

    {
        oferta vec[] = { {.preco = 0.5, .peso=0.2}, {.preco = 5.0, .peso=0.7}, {.preco = 0.2, .peso=0.15}, {.preco = 0.52, .peso=0.135} };
        int N = sizeof(vec)/sizeof(oferta);
        int res_aluno = mais_barato (vec, N);
        int res_certa = mais_barato_certo (vec, N);
        printf("%d %d %d\n", N, res_aluno, res_certa);
        assertEquals("{ {.preco = 0.5, .peso=0.2},\n{.preco = 5.0, .peso=0.7},\n{.preco = 0.2, .peso=0.15},\n{.preco = 0.52, .peso=0.135} }", res_aluno, res_certa);
    }

    {
        oferta vec[] = { {.preco = 0.25, .peso=0.2222}, {.preco = 5.0, .peso=7}, {.preco = 222, .peso=323}, {.preco = 12, .peso=10} };
        int N = sizeof(vec)/sizeof(oferta);
        int res_aluno = mais_barato (vec, N);
        int res_certa = mais_barato_certo (vec, N);
        assertEquals("{ {.preco = 0.25, .peso=0.2222},\n{.preco = 5.0, .peso=7},\n{.preco = 222, .peso=323},\n{.preco = 12, .peso=10} }", res_aluno, res_certa);
    }


    printSummary

    #include "../../telemetry.c"

    return 0;
}