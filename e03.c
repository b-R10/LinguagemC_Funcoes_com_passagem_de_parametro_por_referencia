#include <stdio.h>
// protótipo
void por_valor(int a, int b, int c);
// protótipo
void por_ref(int *a, int *b, int *c);
// função principal
int main (void) {
    int x = 2, y = 4, z = 6;
    printf("\nAntes de chamar por_valor: x = %d, y = %d, z = %d",x,y,z);
        // x = 2, y = 4, z = 6
    por_valor(x,y,z);
    printf("\nDepois de chamar por_valor: x = %d, y = %d, z = %d",x,y,z);
        // x = 2, y = 4, z = 6
    printf("\nAntes de chamar por_ref: x = %d, y = %d, z = %d",x,y,z);
        // x = 2, y = 4, z = 6
    por_ref(&x,&y,&z);
    printf("\nDepois de chamar por_ref: x = %d, y = %d, z = %d",x,y,z);
        // x = 0, y = 0, z = 0
    return 0;
}
// procedimento
void por_valor(int a, int b, int c) {
    a = b = c = 0;
    // x = 2,    a = 0;
    // y = 4,   b = 0;
    // z = 6,   c = 0;
}
// procedimento
void por_ref(int *a, int *b, int *c) {
    *a = *b = *c = 0;
    // x = 0
    // y = 0
    // z = 0
}
