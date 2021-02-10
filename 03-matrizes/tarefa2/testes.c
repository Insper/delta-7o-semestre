#include <stdio.h>
#include <stdlib.h>

#include "../../macros_correcoes.h"
#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d3-t2"


void conexoes_entre_terminais(int *mat, int N);

void conexoes_entre_terminais_certo(int *mat, int N) {
    int mais_conexoes_idx = 0;
    int mais_conexoes_val = -1;
    int mais_onibus_idx = 0;
    int mais_onibus_val = -1;

    for (int i = 0; i < N; i++) {
        int nao_zeros = 0;
        int conex = 0;
        for (int j = 0; j < N; j++) {
            if (mat[i * N + j] != 0) nao_zeros++;
            conex += mat[i * N + j];
        }
        if (nao_zeros > mais_conexoes_val) {
            mais_conexoes_idx = i;
            mais_conexoes_val = nao_zeros;
        }

        if (conex > mais_onibus_val) {
            mais_onibus_val = conex;
            mais_onibus_idx = i;
        }
    }
    printf("O terminal %d é o que recebe mais onibus (%d onibus)\n", mais_onibus_idx, mais_onibus_val);
    printf("O terminal %d é o mais conectado (%d terminais)\n", mais_conexoes_idx, mais_conexoes_val);
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
        
        rodaESalvaSaida(conexoes_entre_terminais(mat, N), "teste1-aluno");
        rodaESalvaSaida(conexoes_entre_terminais_certo(mat, N), "teste1-certo");

        int passou = system("diff teste1-certo teste1-aluno > /dev/null" );
        assertEquals("Exemplo T1, veja arquivos teste1-*", passou, 0);
        if (passou == 0) {
            unlink("teste1-certo");
            unlink("teste1-aluno");
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
        
        rodaESalvaSaida(conexoes_entre_terminais(mat, N), "teste2-aluno");
        rodaESalvaSaida(conexoes_entre_terminais_certo(mat, N), "teste2-certo");

        int passou = system("diff teste2-certo teste2-aluno > /dev/null" );
        assertEquals("Exemplo T2, veja arquivos teste2-*", passou, 0);
        if (passou == 0) {
            unlink("teste2-certo");
            unlink("teste2-aluno");
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

        rodaESalvaSaida(conexoes_entre_terminais(mat, N), "teste3-aluno");
        rodaESalvaSaida(conexoes_entre_terminais_certo(mat, N), "teste3-certo");

        int passou = system("diff teste3-certo teste3-aluno > /dev/null" );
        assertEquals("Exemplo T3, veja arquivos teste3-*", passou, 0);
        if (passou == 0) {
            unlink("teste3-certo");
            unlink("teste3-aluno");
        }

    }

    {
        int N = 3;
        int mat[] = {
            0, 5, 0,
            5, 0, 2,
            0, 2, 0,
        };

        rodaESalvaSaida(conexoes_entre_terminais(mat, N), "teste4-aluno");
        rodaESalvaSaida(conexoes_entre_terminais_certo(mat, N), "teste4-certo");

        int passou = system("diff teste4-certo teste4-aluno > /dev/null" );
        assertEquals("Exemplo T4, veja arquivos teste4-*", passou, 0);
        if (passou == 0) {
            unlink("teste4-certo");
            unlink("teste4-aluno");
        }


    }

    printSummary

    #include "../../telemetry.c"

}