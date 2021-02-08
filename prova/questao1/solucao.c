int maior_sequencia_crescente(int *vetor, int n) {
    int current = 1;
    int best = 1;

    for (int i = 1; i < n; i++) {
        if (vetor[i] <= vetor[i-1]) {
            if (current > best) best = current;
            current = 1;
        } else {
            current++;
        }
    }
    if (current > best) best = current;

    return best;
}   