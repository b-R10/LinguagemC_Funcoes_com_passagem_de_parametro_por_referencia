#include <stdio.h>

void soma(int, int, int, int *);

int main(){
    int a, b, c, s=0;
    do {
        printf("digite 3 nros com a>=1 : \n");
        scanf("%d%d%d", &a, &b, &c);
    } while (a<=0);
    // caso a = 1, b = 2, c =3
    soma(a,b,c,&s);
    printf("\na soma --> %d ", s);
    getch();
    return 0;
}

// caso a = 1, b = 2, c =3
void soma(int x, int y, int z, int *ss){
        // x = a = 1
        // y = b = 2
        // z = c = 3
        // *ss = s = 0, ss = &s
    int i;
    for (i=y; i<=z; i++) {
        if (i%x==0)     // caso i%x == 0
            *ss+=i;     // *ss = s; s = s + i
        /*
        i = 2 (i%x == 0)
            s = 0
            s = 0 + 2 = 2
        i = 3 (i%x == 0)
            s = 2
            s = 2 + 3 = 5
        
        */
    }
}