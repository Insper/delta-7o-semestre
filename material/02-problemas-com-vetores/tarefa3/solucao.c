#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int num;
    int rep;
} Repeticoes;

void conta_repeticoes(int *vec, int n) {
    //primeiro elemento:
    Repeticoes R[n];
    R[0].num = vec[0];
    R[0].rep = 1;
    int numeros_unicos = 1;
    int numero_contado;
    for(int i = 1; i < n; i++){
        numero_contado = 0;
        for(int j = 0; j < numeros_unicos; j++){
            if(vec[i] == R[j].num){
                R[j].rep++;
                numero_contado = 1;
            }
        }
        if(numero_contado == 0){
            //é um numero novo
            R[numeros_unicos].num = vec[i];
            R[numeros_unicos].rep = 1;
            numeros_unicos++;
        }
    }
    //prints
    for(int k = 0; k < numeros_unicos; k++){
        if(R[k].rep > 1){
            printf("%d aparece %d vezes\n", R[k].num, R[k].rep);
        }
        else{
            printf("%d aparece %d vez\n", R[k].num, R[k].rep);
        }
    }
}