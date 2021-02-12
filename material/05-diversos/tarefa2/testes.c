
#include <string.h>
#include <stdio.h>

#include "../../macros_correcoes.h"

#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d5-t2"

#include "solucao.c"

int encontrou_e_eh_unico(int *vec, int n, int el) {
    int vezes = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] == el) vezes++;
    }
    return vezes == 1;
}

void sprint_vec(char *msg, int *vec, int n) {
    char num[10];
    for (int i = 0; i < n; i++) {
        sprintf(num, "%d ", vec[i]);
        strcat(msg, num);
    }
}

int main() {
    char test_descr[1024];
    {
        int vec1[] = {1, 2, 5, 7, 8, 3};
        int vec2[] = {8, 3, 0, 55, 10};
        int nout = 0;
        int vec_out[6];


        int n1 = sizeof(vec1)/sizeof(int);
        int n2 = sizeof(vec2)/sizeof(int);
        
        sprintf(test_descr, "Teste: {");
        sprint_vec(test_descr, vec1, n1);
        strcat(test_descr, "}, {");
        sprint_vec(test_descr, vec2, n2);

        printf("%s}\n", test_descr);

        intersecao(vec1, n1, vec2, n2, vec_out, &nout);

        assertEquals("Tamanho esperado: 2", nout, 2);
        assertEquals("Elemento 3 não encontrado ou encontrado mais de uma vez", encontrou_e_eh_unico(vec_out, nout, 3), 1);
        assertEquals("Elemento 8 não encontrado ou encontrado mais de uma vez", encontrou_e_eh_unico(vec_out, nout, 8), 1);
    }

    {
        int vec1[] = {1, 2, 5};
        int vec2[] = {8, 3, 0, 55, 10};
        int nout = 0;
        int vec_out[3];

        int n1 = sizeof(vec1)/sizeof(int);
        int n2 = sizeof(vec2)/sizeof(int);

        sprintf(test_descr, "Teste: {");
        sprint_vec(test_descr, vec1, n1);
        strcat(test_descr, "}, {");
        sprint_vec(test_descr, vec2, n2);

        printf("%s}\n", test_descr);


        intersecao(vec1, sizeof(vec1)/sizeof(int), vec2, sizeof(vec2)/sizeof(int), vec_out, &nout);

        assertEquals("Tamanho esperado: 0", nout, 0);
    }

    {
        int vec1[] = {1, 2, 5, 7, 8, 3};
        int vec2[] = {8, 3};
        int nout = 0;
        int vec_out[6];

        int n1 = sizeof(vec1)/sizeof(int);
        int n2 = sizeof(vec2)/sizeof(int);

        sprintf(test_descr, "Teste: {");
        sprint_vec(test_descr, vec1, n1);
        strcat(test_descr, "}, {");
        sprint_vec(test_descr, vec2, n2);

        printf("%s}\n", test_descr);


        intersecao(vec1, sizeof(vec1)/sizeof(int), vec2, sizeof(vec2)/sizeof(int), vec_out, &nout);

        assertEquals("Tamanho esperado: 2", nout, 2);
        assertEquals("Elemento 3 não encontrado ou encontrado mais de uma vez", encontrou_e_eh_unico(vec_out, nout, 3), 1);
        assertEquals("Elemento 8 não encontrado ou encontrado mais de uma vez", encontrou_e_eh_unico(vec_out, nout, 8), 1);
    }

    {
        int vec1[] = {0, 4, 2, 1, 88, 10, -1};
        int vec2[] = {-1, 4, 11, 7, 2};
        int nout = 0;
        int vec_out[6];

        int n1 = sizeof(vec1)/sizeof(int);
        int n2 = sizeof(vec2)/sizeof(int);

        sprintf(test_descr, "Teste: {");
        sprint_vec(test_descr, vec1, n1);
        strcat(test_descr, "}, {");
        sprint_vec(test_descr, vec2, n2);

        printf("%s}\n", test_descr);


        intersecao(vec1, sizeof(vec1)/sizeof(int), vec2, sizeof(vec2)/sizeof(int), vec_out, &nout);

        assertEquals("Tamanho esperado: 3", nout, 3);
        assertEquals("Elemento -1 não encontrado ou encontrado mais de uma vez", encontrou_e_eh_unico(vec_out, nout, -1), 1);
        assertEquals("Elemento 2 não encontrado ou encontrado mais de uma vez", encontrou_e_eh_unico(vec_out, nout, 2), 1);
        assertEquals("Elemento 4 não encontrado ou encontrado mais de uma vez", encontrou_e_eh_unico(vec_out, nout, 4), 1);
    }

    {
        int vec2[] = {0, 4, 2, 1, 88, 10, -1};
        int vec1[] = {-1, 4, 11, 7, 2};
        int nout = 0;
        int vec_out[6];

        int n1 = sizeof(vec1)/sizeof(int);
        int n2 = sizeof(vec2)/sizeof(int);

        sprintf(test_descr, "Teste: {");
        sprint_vec(test_descr, vec1, n1);
        strcat(test_descr, "}, {");
        sprint_vec(test_descr, vec2, n2);

        printf("%s}\n", test_descr);


        intersecao(vec1, sizeof(vec1)/sizeof(int), vec2, sizeof(vec2)/sizeof(int), vec_out, &nout);

        assertEquals("Tamanho esperado: 3", nout, 3);
        assertEquals("Elemento -1 não encontrado ou encontrado mais de uma vez", encontrou_e_eh_unico(vec_out, nout, -1), 1);
        assertEquals("Elemento 2 não encontrado ou encontrado mais de uma vez", encontrou_e_eh_unico(vec_out, nout, 2), 1);
        assertEquals("Elemento 4 não encontrado ou encontrado mais de uma vez", encontrou_e_eh_unico(vec_out, nout, 4), 1);
    }
    
}