#include <stdlib.h>
#include <stdio.h>

void conta_repeticoes(int *vec, int n) {
    // O(n^2)
    // ideia 1 - colocar em vetor auxiliar e checar 
    // ideia 2 - checa todo mundo antes por repetições
    // ideia 3 - vetor de vistos

    int *vec_aux = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) vec_aux[i] = 0;
    // int aux_sz = 0;

    for (int i = 0; i < n; i++) {
        int el = vec[i];
        if (vec_aux[i] != 0) continue;
        vec_aux[i] = 1;
        int j;
        // IDEIA 1
        // for (j = 0; j < aux_sz; j++) {
        //     if (vec_aux[j] == el) break;
        // }
        // if (j == aux_sz) {
        //     vec_aux[j] = el;
        //     aux_sz++;
        // } else {
        //     continue;
        // }

        // IDEIA 2
        // for (j = 0; vec[j] != el; j++) {}
        // if (j < i) continue;

        int contagem = 0;
        for (int j = 0; j < n; j++) {
            if (vec[j] == el) {
                contagem++;
                vec_aux[j] = 1;
            }
        }

        printf("%d aparece %d vez", el, contagem);
        if (contagem > 1) printf("es");
        printf("\n");
    }

    free(vec_aux);

}