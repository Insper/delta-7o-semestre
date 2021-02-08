#include <stdio.h>
#include "../macros_correcoes.h"

int maior_sequencia_crescente(int *vetor, int n);

int main() {
    {
        int entrada[] = {1, 2, 3};
        assertEquals("1, 2, 3", maior_sequencia_crescente(entrada, 3), 3);
    }

    {
        int entrada[] = {12, 3, 1};
        assertEquals("12, 3, 1", maior_sequencia_crescente(entrada, 3), 1);
    }

    {
        int entrada[] = {3, 2, 1, 3, 5, 7, 9, 8};
        assertEquals("{3, 2, 1, 3, 5, 7, 9, 8}", maior_sequencia_crescente(entrada, 8), 5);
    }

    {
        int entrada[] = {5, 6, 4, 7, 3, 8};
        assertEquals("{5, 6, 4, 7, 3, 8}", maior_sequencia_crescente(entrada, 6), 2);
    }

    {
        int entrada[] = {0, 0, 0, 0, 0, 0};
        assertEquals("{0, 0, 0, 0, 0, 0}", maior_sequencia_crescente(entrada, 6), 1);
    }

    {
        int entrada[] = {0, 0, 0, 3, 4, 6};
        assertEquals("{0, 0, 0, 3, 4, 6}", maior_sequencia_crescente(entrada, 6), 4);
    }


    {
        int entrada[] = {-1, 5, 6, 10, 0, 0, 0};
        assertEquals("{-1, 5, 6, 10, 0, 0, 0}", maior_sequencia_crescente(entrada, 7), 4);
    }
    
    {
        int entrada[] = {-1, -2, 0, -3, 5, 7, -10};
        assertEquals("{-1, -2, 0, -3, 5, 7, -10}", maior_sequencia_crescente(entrada, 7), 3);
    }

    printSummary;

    FILE *f = fopen("solucao.c", "r");
    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);
    char *content = malloc(200 + size);

    int offset = snprintf(content, 200, "// %d/%d passaram\n", tests_passed, (tests_passed + tests_failed));
    fread(content + offset, 1, size, f);

    fclose(f);

    send_data("3", "q1delta", content);
    free(content);
}