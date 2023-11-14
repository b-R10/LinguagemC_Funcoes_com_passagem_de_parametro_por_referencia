#include <stdio.h>
#include <stdlib.h>

// protótipo
void incrementar(int *);

// função principal
int main(){
    int i=1;
    incrementar(&i);
        // parâmetro: posição de i na memória
    printf("\ni --> %d ", i);
    getch();
        // mantem o DOS aberto até o usuário apertar qualquer tecla
    return 0;
}

// procedimento
void incrementar(int *num){
        // *num = i; num = &i
    *num+=10;
        // i = i + 10;      i = 11
    printf("\nnum --> %d ", *num);
        // imprime o conteúdo da varíavel apontada por *num
}