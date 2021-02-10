#include <stdio.h>
#include <stdlib.h>

#include "../../macros_correcoes.h"
#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d3-t1"


void terminal_menos_popular(int *matriz_grafo, int N, int *destino_menos_onibus);

void terminal_menos_popular_certo(int *matriz_grafo, int N, int *destino_menos_onibus) {
    for (int i = 0; i < N; i++) {
        destino_menos_onibus[i] = -1;
        for (int j = 0; j < N; j++) {
            int el = matriz_grafo[i * N + j];
            if (el == 0) continue;
            if (destino_menos_onibus[i] == -1 || el < destino_menos_onibus[i]) {
                destino_menos_onibus[i] = el;
            }
        }
    }
}

int main() {
    {
        int N = 5;
        int mat[] = {
            0, 4, 5, 7, 0,
            4, 0, 2, 0, 1,
            5, 2, 0, 9, 3,
            7, 0, 9, 0, 3,
            0, 1, 3, 3, 0
        };
        int *vec_aluno = malloc(sizeof(int) * N);
        int *vec_certo = malloc(sizeof(int) * N);

        terminal_menos_popular(mat, N, vec_aluno);
        terminal_menos_popular_certo(mat, N, vec_certo);

        char msg[1000];
        for (int i = 0; i < N; i++) {
            sprintf(msg, "Teste 1: %d esperado %d recebido %d", i, vec_certo[i], vec_aluno[i]);
            assertEquals(msg, vec_certo[i], vec_aluno[i]);
        }        
    }

    {
        int N = 5;
        int mat[] = {
            0, 4, 5, 0, 1,
            4, 0, 0, 0, 1,
            5, 0, 0, 9, 3,
            0, 0, 9, 0, 3,
            1, 1, 3, 3, 0,
        };
        int *vec_aluno = malloc(sizeof(int) * N);
        int *vec_certo = malloc(sizeof(int) * N);

        terminal_menos_popular(mat, N, vec_aluno);
        terminal_menos_popular_certo(mat, N, vec_certo);

        char msg[1000];
        for (int i = 0; i < N; i++) {
            sprintf(msg, "Teste 2: %d esperado %d recebido %d", i, vec_certo[i], vec_aluno[i]);
            assertEquals(msg, vec_certo[i], vec_aluno[i]);
        }
    }

    {
        int N = 5;
        int mat[] = {
            0, 2, 3, 0, 0,
            2, 0, 1, 0, 0,
            3, 1, 0, 0, 0,
            0, 0, 0, 0, 5,
            0, 0, 0, 5, 0,
        };
        int *vec_aluno = malloc(sizeof(int) * N);
        int *vec_certo = malloc(sizeof(int) * N);

        terminal_menos_popular(mat, N, vec_aluno);
        terminal_menos_popular_certo(mat, N, vec_certo);

        char msg[1000];
        for (int i = 0; i < N; i++) {
            sprintf(msg, "Teste 3: %d esperado %d recebido %d", i, vec_certo[i], vec_aluno[i]);
            assertEquals(msg, vec_certo[i], vec_aluno[i]);
        }        
    }

    {
        int N = 3;
        int mat[] = {
            0, 5, 0,
            5, 0, 2,
            0, 2, 0,
        };
        int *vec_aluno = malloc(sizeof(int) * N);
        int *vec_certo = malloc(sizeof(int) * N);

        terminal_menos_popular(mat, N, vec_aluno);
        terminal_menos_popular_certo(mat, N, vec_certo);

        char msg[1000];
        for (int i = 0; i < N; i++) {
            sprintf(msg, "Teste 4: %d esperado %d recebido %d", i, vec_certo[i], vec_aluno[i]);
            assertEquals(msg, vec_certo[i], vec_aluno[i]);
        }        
    }

    printSummary

    #include "../../telemetry.c"
}