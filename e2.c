#include <stdio.h>

void exibe_e_altera(int *n1, int *n2, int *n3);

void exibe_e_altera(int *n1, int *n2, int *n3) {
    // n1 = &a;     *n1 = a = 1
    // n2 = &b;     *n2 = b = 2
    // n3 = &c;     *n3 = c = 3
    printf("Valores originais na funcao - 1o, 2o, e 3o: %d %d %d\n",*n1, *n2, *n3);
    *n1 += 100;     // a += 100;        a = 101
    *n2 += 100;     // b += 100;        b = 102
    *n3 += 100;     // c += 100;        c = 103
    printf("Valores finais na funcao - 1o, 2o e 3o: %d %d %d\n", *n1, *n2, *n3);
}

int main(void) {
    int a = 1, b = 2, c = 3;
    exibe_e_altera(&a, &b, &c);     // os parâmetros são os endereços de cada variável
    // O valor das varíaveis é alterado, pois, os valores apontados por *n1, *n2 e *n3 são alterados no procedimento
    printf("Valores finais em main 1o, 2o e 3o: %d %d %d\n", a, b ,c);
    return 0;
}