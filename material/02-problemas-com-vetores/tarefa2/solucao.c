#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int maior_soma(int *vec, int n) {
    int maior_soma = INT_MIN;
    int soma;
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            soma = vec[i]+vec[j];
            if(soma > maior_soma){
                maior_soma = soma;
            }
        }
    }
    return maior_soma;
}