void troco_moedas(int reais, int centavos, int *q50, int *q25, int *q10, int *q5, int *q1) {
    *q50 = *q25 = *q10 = *q5 = *q1 = 0;

    *q50 = 2 * reais;
    if (centavos >= 50) {
        (*q50)++;
        centavos -= 50;
    }

    if (centavos >= 25) {
        (*q25)++;
        centavos -= 25;
    }

    *q10 = centavos / 10;
    centavos = centavos % 10;

    *q5 = centavos / 5;
    centavos = centavos % 5;

    *q1 = centavos;
}