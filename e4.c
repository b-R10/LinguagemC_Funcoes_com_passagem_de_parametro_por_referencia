#include <stdio.h>
// protótipo
void muda_primeiro(int *primeiro, int segundo);
// função principal
int main(void) {
    int a = 0, b = 5;
    printf("Valor de a: %d - valor de b: %d\n", a, b);
        // a = 0, b = 5
    muda_primeiro(&a, b);
    printf("Valor de a: %d - valor de b: %d\n", a, b);
        // a = 5, b = 5
    return 0;
}
// procedimento
void muda_primeiro(int *primeiro, int segundo){
        // primeiro = &a, *primeiro = a
        // segundo = b
    *primeiro = segundo; /* Atribui o valor de segundo a *primeiro */
        // a = b, a = 5
}