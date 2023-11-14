#include <stdio.h>
#include <stdlib.h>

// protótipo
void exibe_e_altera(int x, int y, int z);

// procedimento
void exibe_e_altera(int x, int y, int z){
    // x = 1, y = 2, z = 3
    printf("Valores originais de x, y e z: %d %d %d\n", x, y, z);
    // x = a + 100 = 101
    x += 100;
    // y = a + 100 = 102
    y += 100;
    // z = a + 100 = 103
    z += 100;
    printf("Valores finais de x, y e z dentro da funcao: %d %d %d\n",x, y, z);
}

// função principal
int main(void){
    int a = 1, b = 2, c = 3;
    exibe_e_altera(a, b, c);
    // como o procedimento não tem retorno, os valores de a, b e c continuam os mesmos.
    printf("Valores finais em main de a, b e c: %d %d %d\n", a,b,c);
    return 0;
}
