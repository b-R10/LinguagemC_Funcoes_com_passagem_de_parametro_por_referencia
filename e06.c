#include <stdio.h>
#include <stdlib.h>
// protótipo
void calc(int *, int);
// procedimento 
void calc(int *a, int b){
        // *a = x = 4,  a = &x
        // b = y = 2
    *a*=2;
        // x = 4*2 = 8
    b+=5;
        // b = 2+5 = 7
    printf("\na --> %d ", *a);
        // imprime 8
    printf("\nb --> %d ", b);
        // imprime 7
}
// função principal
int main(){
    int x=4, y=2;
    calc(&x,y);
    printf("\nx --> %d ", x);
        // imprime 8
    printf("\ny --> %d ", y);
        // imprime 2
    getch();
    return 0;
}
