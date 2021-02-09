#include <math.h>

void transforma_log(double *x, double *y, int n) {
    y[0] = x[0];
    for (int i = 1; i < n; i++) {
        y[i] = log(x[i]/x[i-1]);
    }
}