#include <stdlib.h>
#include <stdio.h>

typedef struct {
    double peso;
    double preco;
} oferta;

int mais_barato(oferta *vec, int n) {
    double preco_kg_mais_barato;
    double preco_kg;
    //inicializando o primeiro para comparar
    int id_mais_barato = 0;
    preco_kg_mais_barato = vec[0].preco/vec[0].peso;
    for(int i = 1; i < n; i++){
        preco_kg = vec[i].preco/vec[i].peso;
        if(preco_kg < preco_kg_mais_barato){
            preco_kg_mais_barato = preco_kg;
            id_mais_barato = i;
        }
    }
    return id_mais_barato;
}
