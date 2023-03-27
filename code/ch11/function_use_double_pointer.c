#include <stdio.h>

int pswap(int **ppa, int **ppb);

int main() {
    int a, b;
    int *pa, *pb;

    pa = &a;
    pb = &b;

    printf("pa is : %p \n", pa);
    printf("&pa is : %p \n", &pa);
    printf("pb is : %p \n", pb);
    printf("&pb is : %p \n", &pb);

    printf("---------call---------\n");
    pswap(&pa, &pb);
    printf("--------- end --------\n");

    printf("pa is : %p \n", pa);
    printf("&pa is : %p \n", &pa);
    printf("pb is : %p \n", pb);
    printf("&pb is : %p \n", &pb);

    return 0;
}

int pswap(int **ppa, int **ppb) {
    int *temp = *ppa;

    printf("ppa is : %p \n", ppa);
    printf("ppb is : %p \n", ppb);

    *ppa = *ppb;
    *ppb = temp;

    return 0;
}