#include "../../macros_correcoes.h"
#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d1-t2"

#include <math.h>
#include <stdlib.h>

void transforma_log(double *x, double *y, int n);

void transforma_log_ans(double *x, double *y, int n) {
    y[0] = x[0];
    for (int i = 1; i < n; i++) {
        y[i] = log(x[i]/x[i-1]);
    }
}

int main() {

    int N = 1000;
    double *vec_test = malloc(sizeof(double) * N);
    double *vec_ans = malloc(sizeof(double) * N);
    double *vec_ans_certo = malloc(sizeof(double) * N);
    for (int i = 0; i < N; i++)
    {
        vec_test[i] = ((double) rand() / RAND_MAX) * 20;
    }

    transforma_log(vec_test, vec_ans, N);
    transforma_log_ans(vec_test, vec_ans_certo, N);
    for (int i = 0; i < N; i++)
    {
        char msg[100];
        sprintf(msg, "Erro elemento %d. Esperado %lf Recebido %lf", i, vec_ans_certo[i], vec_ans[i]);
        assertEquals(msg, vec_ans[i], vec_ans_certo[i]);   
        
    }
    
    

    printSummary

    #include "../../telemetry.c"

    return 0;
}