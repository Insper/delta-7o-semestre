int parenteses_balanceados(char *texto) {
    int contagem = 0;

    for (char *c = texto; *c != '\0'; c++) {
        if (*c == '(') contagem++;
        if (*c == ')') {
            if (contagem > 0) {
                contagem--;
            } else {
                return 0;
            }
        }
    }

    return contagem == 0;
}