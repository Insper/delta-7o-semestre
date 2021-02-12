#include <stdio.h>
#include <stdlib.h>

#include "../../macros_correcoes.h"
#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d4-t3"

int tem_ciclo(int *mat, int N);

int main() {
    {
        int N = 4;
        int mat[] = {
            0, 0, 0, 0,
            1, 0, 0, 0, 
            1, 0, 0, 0, 
            0, 1, 0, 0
        };

        assertEquals("Exemplo 1", tem_ciclo(mat, N), 0);
    }

    {
        int N = 4;
        int mat[] = {
            0, 0, 1, 0,
            0, 0, 0, 1,
            0, 1, 0, 0,
            1, 0, 0, 0
        };

        assertEquals("Exemplo 2", tem_ciclo(mat, N), 1);
    }

    {
        int N = 4;
        int mat[] = {
            0, 0, 0, 0,
            0, 0, 0, 1,
            1, 1, 0, 0,
            1, 0, 0, 0
        };

        assertEquals("Exemplo 3", tem_ciclo(mat, N), 0);
    }
    
    {
        int N = 6;
        int mat[] = {
            0, 1, 0, 1, 0, 0,
            0, 0, 0, 0, 1, 0,
            0, 0, 0, 0, 0, 0,
            0, 0, 1, 0, 0, 0,
            0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0
        };

        assertEquals("Exemplo 4", tem_ciclo(mat, N), 1);
    }

    {
        int N = 2;
        int mat[] = {
            0, 1,
            1, 0
        };

        assertEquals("Exemplo 5", tem_ciclo(mat, N), 1);
    }

    printSummary

    #include "../../telemetry.c"    

    return 0;
}