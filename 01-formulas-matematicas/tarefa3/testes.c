#include "../../macros_correcoes.h"
#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d1-t3"

#include <math.h>
#include <stdlib.h>

void media_movel(double *x, double *y, int dias, int n);

void media_movel_ans(double *x, double *y, int dias, int n) {
    for (int i = 0; i < n; i++)
    {
        double termo = 0;
        for (int k = 0; k < dias && i - k >= 0; k++)
        {
            termo += x[i - k];
        }

        y[i] = termo / dias;
    }
    
}

int main() {
    int N = 1000;
    double *vec_test = malloc(sizeof(double) * N);
    double *vec_ans = malloc(sizeof(double) * N);
    double *vec_ans_certo = malloc(sizeof(double) * N);
    char *msg = malloc(1000);
    for (int i = 0; i < N; i++)
    {
        vec_test[i] = ((double) rand() / RAND_MAX) * 20;
    }

    media_movel(vec_test, vec_ans, 7, N);
    media_movel_ans(vec_test, vec_ans_certo, 7, N);
    for (int i = 0; i < N; i++) {
        sprintf(msg, "Media 7 dias. Elemento %d. Esperado %lf Recebido %lf", i, vec_ans_certo[i], vec_ans[i]);
        assertEquals(msg, fabs(vec_ans[i] - vec_ans_certo[i]) < 0.0001, 1);   
    }

    media_movel(vec_test, vec_ans, 13, N);
    media_movel_ans(vec_test, vec_ans_certo, 13, N);
    for (int i = 0; i < N; i++) {
        sprintf(msg, "Media 13 dias. Elemento %d. Esperado %lf Recebido %lf", i, vec_ans_certo[i], vec_ans[i]);
        assertEquals(msg, fabs(vec_ans[i] - vec_ans_certo[i]) < 0.0001, 1);   
    }

    return 0;
}