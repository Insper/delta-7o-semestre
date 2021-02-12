#include <stdio.h>
#include <stdlib.h>

#include "../../macros_correcoes.h"
#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d4-t1"

#include "solucao.c"

void sprint_vec(char *msg, unsigned char *vec, int n) {
    char num[10];
    for (int i = 0; i < n; i++) {
        sprintf(num, "%d ", vec[i]);
        strcat(msg, num);
    }
}


int main() {
    char msg[1024];
    {
        BigInt *a = bigint_new(1);
        a->digits[0] = 5;
        BigInt *b = bigint_new(1);
        b->digits[0] = 7;

        printf("Teste 5 + 7\n");
        BigInt *r = bigint_sum(a, b);
        sprintf(msg, "{");
        sprint_vec(msg, r->digits, r->n);
        printf("Resultado: %s}\n", msg);

        assertEquals("r->N == 2", r->n, 2);
        assertEquals("r->digits == {2, 1}", r->digits[0] == 2 && r->digits[1] == 1, 1);

        bigint_free(a);
        bigint_free(b);
        bigint_free(r);
    }

    {
        BigInt *a = bigint_new(1);
        a->digits[0] = 1;
        BigInt *b = bigint_new(1);
        b->digits[0] = 7;

        printf("Teste 1 + 7\n");
        BigInt *r = bigint_sum(a, b);
        sprintf(msg, "{");
        sprint_vec(msg, r->digits, r->n);
        printf("Resultado: %s}\n", msg);
        assertEquals("r->N == 1", r->n, 1);
        assertEquals("r->digits == {8}", r->digits[0], 8);

        bigint_free(a);
        bigint_free(b);
        bigint_free(r);
    }

    {
        BigInt *a = bigint_new(2);
        a->digits[0] = 1; a->digits[1] = 3;
        BigInt *b = bigint_new(1);
        b->digits[0] = 9;

        printf("Teste 31 + 9\n");
        BigInt *r = bigint_sum(a, b);
        sprintf(msg, "{");
        sprint_vec(msg, r->digits, r->n);
        printf("Resultado: %s}\n", msg);
        assertEquals("r->N == 2", r->n, 2);
        assertEquals("r->digits == {0, 4}", r->digits[0] == 0 && r->digits[1] == 4, 1);

        bigint_free(a);
        bigint_free(b);
        bigint_free(r);
    }


        {
        BigInt *a = bigint_new(2);
        a->digits[0] = 9; a->digits[1] = 9;
        BigInt *b = bigint_new(1);
        b->digits[0] = 5;

        printf("Teste 5 + 99\n");
        BigInt *r = bigint_sum(b, a);
        sprintf(msg, "{");
        sprint_vec(msg, r->digits, r->n);
        printf("Resultado: %s}\n", msg);
        assertEquals("r->N == 3", r->n, 3);
        assertEquals("r->digits == {4, 0, 1}", r->digits[0] == 4 && r->digits[1] == 0 && r->digits[2] == 1, 1);

        bigint_free(a);
        bigint_free(b);
        bigint_free(r);
    }

    printSummary

    #include "../../telemetry.c"

}