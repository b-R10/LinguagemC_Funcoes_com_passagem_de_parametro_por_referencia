#include <stdio.h>
#include <stdlib.h>

int verifica(int);

int main(){
    int num;
    do{
        printf("digite um nro: \n");
        scanf("%d", &num);      // caso num = 10
        if (num!=0)
            printf("\nnr --> %d possui %d divisores \n", num, verifica(num));
                // num = 10, verifica(num) = 4
    } while (num!=0);
    getch();
    return 0;
}

int verifica(int n){
        // n = num
        // n = 10
    int i, q=2;
    for (i=2; i<=(n/2); i++)    // até i <= 10/2
        if (n % i == 0)
            q++;
        /*
        i=2
            num%i == 0
            10%2 == 0
            q = 2 + 1 = 3
        i = 3
            10%3 != 0
        i = 4
            10%4 != 0
        i = 5
            10%5 == 0
            q = 3 + 1 = 4
        */
    return q;
    // q = 4
}