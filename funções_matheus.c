void soma(int a, int b, int *resultado);
void and_bit_a_bit(int a, int b, int *resultado);
void produtorio_intervalo(int inicio, int fim, long long int *resultado);
void menor_que(int a, int b, int *resultado);


void soma(int a, int b, int *resultado) {
    *resultado = a + b;
}

void and_bit_a_bit(int a, int b, int *resultado) {
    *resultado = a & b;
}
void produtorio_intervalo(int inicio, int fim, long long int *resultado) {
    *resultado = 1;
    int i;
    int start = inicio;
    int end = fim;

    if (inicio > fim) {
        start = fim;
        end = inicio;
    }

    for (i = start; i <= end; i++) {
        if (i == 0) {
            *resultado = 0;
            return;
        }
        *resultado *= (long long int)i;
    }
}

void menor_que(int a, int b, int *resultado) {
    *resultado = (a < b) ? SIM : NAO;
}