#include <stdio.h>
#include <stdlib.h>

void soma(int, int, int *);

// considerando o caso a = 1, b = 3
int main(){
    int a, b, s=0;
    printf("digite 2 nros: ");
    scanf("%d%d", &a, &b);
    // a = 1
    // b = 3
    if (a<=b)
        soma(a, b, &s);
    printf("\na soma de %d e %d --> %d ", a, b, s);
    getch();
    return 0;
}

void soma(int x, int y, int *z){
        // x = a;   x = 1
        // y = b;   y = 3
        // *z = s, z = &s
    int i;
    for (i=x; i<=y; i++)
        *z+=i;
        // s = s + 1 (y-x) vezes
        /*
        i = 1
            s = 0
            s = 0 + 1 = 1
        i = 2
            s = 1
            s = 1 + 2 = 3
        i = 3
            s = 3
            s = 3 + 3 = 3
        */
}