#include "../../macros_correcoes.h"
#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d1-t1"

#include <math.h>
#include <stdlib.h>

double mycos(double x);

int main() {
    char msg[1000];
    for (int i = 0; i < 200; i++)
    {
        double num = (double) rand() / RAND_MAX * (M_PI);
        double aluno = mycos(num);
        double resposta = cos(num);
        sprintf(msg, "Esperado: %lf Recebido: %lf", resposta, aluno);
        assertEquals(msg, fabs(aluno - resposta) < 0.001, 1);
    }
    
    printSummary

    #include "../../telemetry.c"

    return 0;
}