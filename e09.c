#include <stdio.h>
#include <stdlib.h>

int verifica(int);

int main(){
    int num, x;
    do{
        printf("digite um nro: \n");
        scanf("%d", &num);
    } while (num<1000 || num>9999);
    // caso num = 1000
    x = verifica(num);
        // x = retorno da função
    if (x==1)
        printf("\nnr --> %d possui a caracterisitca \n", num);
    else
        printf("\nnr --> %d nao possui ", num);
    getch();
    return 0;
}

int verifica(int n){
        // n = num
        // n = 1000
    int n1, n2, s;
    n1=(n/100);
        // n1 = num/100
        // n1 = 1000/100 = 10
    n2=(n%100);
        // n2 = num%100
        // n2 = 1000%100 = 0
    s=n1+n2;
        // s = num/100 + num%100 
        // s = 1000/100 + 1000%100 = 10 + 0 
    printf("\nsoma %d ", s);
        // s = num/100 + num%100
        // s = 1000/100 + 1000%100 = 10 + 0 
    if (s*s==n)
            // caso s*s == num
            // 10*10 != 1000
        return 1;
    else
            // caso s*s != num
            // 10*10 != 1000
        return 0;
}
