#include <stdio.h>
#include "../macros_correcoes.h"

int parenteses_balanceados(char *texto);

int main() {
    {
        char *teste = "";
        assertEquals(teste, parenteses_balanceados(teste), 1);
    }

    {
        char *teste = "()";
        assertEquals(teste, parenteses_balanceados(teste), 1);
    }

    {
        char *teste = "(";
        assertEquals(teste, parenteses_balanceados(teste), 0);
    }


    {
        char *teste = ")";
        assertEquals(teste, parenteses_balanceados(teste), 0);
    }


    {
        char *teste = "(())";
        assertEquals(teste, parenteses_balanceados(teste), 1);
    }


    {
        char *teste = "())";
        assertEquals(teste, parenteses_balanceados(teste), 0);
    }


    {
        char *teste = ")()(";
        assertEquals(teste, parenteses_balanceados(teste), 0);
    }


    {
        char *teste = "((())())";
        assertEquals(teste, parenteses_balanceados(teste), 1);
    }

    {
        char *teste = "((() ())))()";
        assertEquals(teste, parenteses_balanceados(teste), 0);
    }

    {
        char *teste = ")(";
        assertEquals(teste, parenteses_balanceados(teste), 0);
    }


    {
        char *teste = "()()()";
        assertEquals(teste, parenteses_balanceados(teste), 1);
    }
    
    {
        char *teste = "(()))(";
        assertEquals(teste, parenteses_balanceados(teste), 0);
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

    send_data("3", "q2delta", content);
    free(content);
}