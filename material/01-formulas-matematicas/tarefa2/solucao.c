#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void transforma_log(double *x, double *y, int n) {
    for(int i = 1; i < n; i++){
        y[i] = log((x[i]/x[i-1]));
    }
}