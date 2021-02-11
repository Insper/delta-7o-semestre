#include <stdio.h>
#include <stdlib.h>

#include "../../macros_correcoes.h"
#define SOLUTIONFILE "solucao.c"
#define PROBLEM "d4-t2"


int string_balanceada(char *str);

int main() {
    {
        char *teste = "";
        assertEquals(teste, string_balanceada(teste), 1);
    }

    {
        char *teste = "()";
        assertEquals(teste, string_balanceada(teste), 1);
    }

    {
        char *teste = "(";
        assertEquals(teste, string_balanceada(teste), 0);
    }


    {
        char *teste = ")";
        assertEquals(teste, string_balanceada(teste), 0);
    }


    {
        char *teste = "(())";
        assertEquals(teste, string_balanceada(teste), 1);
    }


    {
        char *teste = "())";
        assertEquals(teste, string_balanceada(teste), 0);
    }


    {
        char *teste = ")()(";
        assertEquals(teste, string_balanceada(teste), 0);
    }


    {
        char *teste = "((())())";
        assertEquals(teste, string_balanceada(teste), 1);
    }

    {
        char *teste = "((() ())))()";
        assertEquals(teste, string_balanceada(teste), 0);
    }

    {
        char *teste = ")(";
        assertEquals(teste, string_balanceada(teste), 0);
    }


    {
        char *teste = "()()()";
        assertEquals(teste, string_balanceada(teste), 1);
    }
    
    {
        char *teste = "(()))(";
        assertEquals(teste, string_balanceada(teste), 0);
    }


    {
        char *teste = "()[]{}";
        assertEquals(teste, string_balanceada(teste), 1);
    }

    {
        char *teste = "([){]}";
        assertEquals(teste, string_balanceada(teste), 0);
    }

    {
        char *teste = "([{}]{()})";
        assertEquals(teste, string_balanceada(teste), 1);
    }

    {
        char *teste = "([)(])";
        assertEquals(teste, string_balanceada(teste), 0);
    }

    {
        char *teste = "{[()]()[]}";
        assertEquals(teste, string_balanceada(teste), 1);
    }

    {
        char *teste = "[][]{}[({})]";
        assertEquals(teste, string_balanceada(teste), 1);
    }

    {
        char *teste = "([]{[()}])";
        assertEquals(teste, string_balanceada(teste), 0);
    }

    printSummary

    #include "../../telemetry.c"

    return 0;   
}