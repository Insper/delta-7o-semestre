#include <stdio.h>
#include <stdlib.h>

#include "../../macros_correcoes.h"
#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d3-t3"

int existe_caminho(int *mat, int N, int fonte, int destino);

int main() {
    int c;
    char msg[1000];
    {
        int N = 3;
        int mat[] = {
            0, 5, 0,
            5, 0, 2,
            0, 2, 0,

        };

        c = existe_caminho(mat, N, 0, 1);
        sprintf(msg, "Teste 1: caminho entre 0 e 1. Esperado %d recebido %d", 1, c);
        assertEquals(msg, 1, c);

        c = existe_caminho(mat, N, 0, 2);
        sprintf(msg, "Teste 1: caminho entre 0 e 2. Esperado %d recebido %d", 1, c);
        assertEquals(msg, 1, c);

        c = existe_caminho(mat, N, 2, 1);
        sprintf(msg, "Teste 1: caminho entre 2 e 1. Esperado %d recebido %d", 1, c);
        assertEquals(msg, 1, c);

    }

    {
        int N = 4;
        int mat[] = {
            0, 1, 0, 0,
            1, 0, 0, 0,
            0, 0, 0, 1,
            0, 0, 1, 0

        };

        c = existe_caminho(mat, N, 0, 1);
        sprintf(msg, "Teste 2: caminho entre 0 e 1. Esperado %d recebido %d", 1, c);
        assertEquals(msg, 1, c);

        c = existe_caminho(mat, N, 2, 3);
        sprintf(msg, "Teste 2: caminho entre 2 e 3. Esperado %d recebido %d", 1, c);
        assertEquals(msg, 1, c);

        c = existe_caminho(mat, N, 2, 0);
        sprintf(msg, "Teste 2: caminho entre 2 e 0. Esperado %d recebido %d", 0, c);
        assertEquals(msg, 0, c);

        c = existe_caminho(mat, N, 1, 3);
        sprintf(msg, "Teste 2: caminho entre 1, 3. Esperado %d recebido %d", 0, c);
        assertEquals(msg, 0, c);
    }

    {
        int N = 5;
        int mat[] = {
            0, 2, 3, 0, 0,
            2, 0, 1, 0, 0,
            3, 1, 0, 0, 0 ,
            0, 0, 0, 0, 5,
            0, 0, 0, 5, 0
        };


        c = existe_caminho(mat, N, 1, 3);
        sprintf(msg, "Teste 3: caminho entre 1 e 3. Esperado %d recebido %d", 0, c);
        assertEquals(msg, 0, c);

        c = existe_caminho(mat, N, 4, 3);
        sprintf(msg, "Teste 3: caminho entre 4 e 3. Esperado %d recebido %d", 1, c);
        assertEquals(msg, 1, c);

        c = existe_caminho(mat, N, 1, 2);
        sprintf(msg, "Teste 3: caminho entre 1 e 2. Esperado %d recebido %d", 1, c);
        assertEquals(msg, 1, c);

        
    }

    {
        int N = 6;
        int mat[] = {
            0, 1, 0, 0, 0, 0,
            1, 0, 1, 1, 0, 0,
            0, 1, 0, 1, 0, 0,
            0, 1, 1, 0, 0, 0,
            0, 0, 0, 0, 0, 1,
            0, 0, 0, 0, 1, 0            
        };


        c = existe_caminho(mat, N, 0, 3);
        sprintf(msg, "Teste 3: caminho entre 0 e 3. Esperado %d recebido %d", 1, c);
        assertEquals(msg, 1, c);

        c = existe_caminho(mat, N, 0, 2);
        sprintf(msg, "Teste 3: caminho entre 0 e 2. Esperado %d recebido %d", 1, c);
        assertEquals(msg, 1, c);

        c = existe_caminho(mat, N, 4, 5);
        sprintf(msg, "Teste 3: caminho entre 4 e 5. Esperado %d recebido %d", 1, c);
        assertEquals(msg, 1, c);

        c = existe_caminho(mat, N, 4, 0);
        sprintf(msg, "Teste 3: caminho entre 4 e 0. Esperado %d recebido %d", 0, c);
        assertEquals(msg, 0, c);

        c = existe_caminho(mat, N, 0, 5);
        sprintf(msg, "Teste 3: caminho entre 0 e 5. Esperado %d recebido %d", 0, c);
        assertEquals(msg, 0, c);

    }


    printSummary

    #include "../../telemetry.c"
}
