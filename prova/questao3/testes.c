#include <stdio.h>
#include "../macros_correcoes.h"

void troco_moedas(int reais, int centavos, int *q50, int *q25, int *q10, int *q5, int *q1);

int main() {
    {
        int reais = 0, centavos = 0;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 0);
        assertEquals("Troco 25", q25, 0);
        assertEquals("Troco 10", q10, 0);
        assertEquals("Troco 5", q5, 0);
        assertEquals("Troco 1", q1, 0);
    }

    {
        int reais = 1, centavos = 0;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 2);
        assertEquals("Troco 25", q25, 0);
        assertEquals("Troco 10", q10, 0);
        assertEquals("Troco 5", q5, 0);
        assertEquals("Troco 1", q1, 0);
    }

    {
        int reais = 5, centavos = 3;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 10);
        assertEquals("Troco 25", q25, 0);
        assertEquals("Troco 10", q10, 0);
        assertEquals("Troco 5", q5, 0);
        assertEquals("Troco 1", q1, 3);
    }

    {
        int reais = 0, centavos = 92;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 1);
        assertEquals("Troco 25", q25, 1);
        assertEquals("Troco 10", q10, 1);
        assertEquals("Troco 5", q5, 1);
        assertEquals("Troco 1", q1, 2);
    }

    {
        int reais = 0, centavos = 30;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 0);
        assertEquals("Troco 25", q25, 1);
        assertEquals("Troco 10", q10, 0);
        assertEquals("Troco 5", q5, 1);
        assertEquals("Troco 1", q1, 0);
    }

    {
        int reais = 0, centavos = 29;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 0);
        assertEquals("Troco 25", q25, 1);
        assertEquals("Troco 10", q10, 0);
        assertEquals("Troco 5", q5, 0);
        assertEquals("Troco 1", q1, 4);
    }

    {
        int reais = 0, centavos = 34;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 0);
        assertEquals("Troco 25", q25, 1);
        assertEquals("Troco 10", q10, 0);
        assertEquals("Troco 5", q5, 1);
        assertEquals("Troco 1", q1, 4);
    }
    
    {
        int reais = 0, centavos = 18;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 0);
        assertEquals("Troco 25", q25, 0);
        assertEquals("Troco 10", q10, 1);
        assertEquals("Troco 5", q5, 1);
        assertEquals("Troco 1", q1, 3);
    }

    {
        int reais = 0, centavos = 46;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 0);
        assertEquals("Troco 25", q25, 1);
        assertEquals("Troco 10", q10, 2);
        assertEquals("Troco 5", q5, 0);
        assertEquals("Troco 1", q1, 1);
    }

    {
        int reais = 0, centavos = 41;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 0);
        assertEquals("Troco 25", q25, 1);
        assertEquals("Troco 10", q10, 1);
        assertEquals("Troco 5", q5, 1);
        assertEquals("Troco 1", q1, 1);
    }

    {
        int reais = 0, centavos = 1;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 0);
        assertEquals("Troco 25", q25, 0);
        assertEquals("Troco 10", q10, 0);
        assertEquals("Troco 5", q5, 0);
        assertEquals("Troco 1", q1, 1);
    }

    {
        int reais = 0, centavos = 5;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 0);
        assertEquals("Troco 25", q25, 0);
        assertEquals("Troco 10", q10, 0);
        assertEquals("Troco 5", q5, 1);
        assertEquals("Troco 1", q1, 0);
    }

    {
        int reais = 0, centavos = 10;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 0);
        assertEquals("Troco 25", q25, 0);
        assertEquals("Troco 10", q10, 1);
        assertEquals("Troco 5", q5, 0);
        assertEquals("Troco 1", q1, 0);
    }

    {
        int reais = 0, centavos = 25;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 0);
        assertEquals("Troco 25", q25, 1);
        assertEquals("Troco 10", q10, 0);
        assertEquals("Troco 5", q5, 0);
        assertEquals("Troco 1", q1, 0);
    }

    {
        int reais = 0, centavos = 50;
        printf("Teste: %d - %d,%02d\n", __COUNTER__, reais, centavos);
        int q50, q25, q10, q5, q1;
        troco_moedas(reais, centavos, &q50, &q25, &q10, &q5, &q1);
        assertEquals("Troco 50", q50, 1);
        assertEquals("Troco 25", q25, 0);
        assertEquals("Troco 10", q10, 0);
        assertEquals("Troco 5", q5, 0);
        assertEquals("Troco 1", q1, 0);
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

    send_data("3", "q3delta", content);
    free(content);
}