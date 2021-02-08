#include "../../macros_correcoes.h"
#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d1-t1"

#include <math.h>
#include <stdlib.h>

double mycos(double x);

int main() {
    
    for (int i = 0; i < 200; i++)
    {
        double num = (double) rand() / RAND_MAX * (M_PI);
        assertEquals("Erro", fabs(cos(num) - mycos(num)) < 0.001, 1);
    }
    
    printSummary

    #include "../../telemetry.c"

    return 0;
}