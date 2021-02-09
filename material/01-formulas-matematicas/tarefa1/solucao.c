#include <stdlib.h>
#include <stdio.h>

double mycos(double num) {

    double pot = 1;
    long fac = 1;
    long exp = 2;
    double modulo = 1;
    int maior = 1;
    while(maior == 1){
        pot = pot * num * num;
        fac = fac * exp * (exp-1);
        exp += 2;     
        modulo = modulo - (pot/fac);
        if(modulo < 0.001){
            printf("É MENOSR\n");
            maior = 0;
        }
        printf("NUMERO: %f\nModulo atual: %f\nPotencia atual: %f\n Fatorial atual: %d\nid EXP: %d\n", num, modulo, pot, fac, exp-2);
    }
    return 0;
}