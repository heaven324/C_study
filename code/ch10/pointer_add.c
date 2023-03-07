#include <stdio.h>

int main() {
    int a;
    char b;
    double c;
    int *pa = &a;
    char *pb = &b;
    double *pc = &c;

    printf("pa value : %p \n", pa);
    printf("(pa + 1) value : %p \n", pa + 1);
    printf("pa value : %p \n", pa);
    printf("(pa - 1) value : %p \n", pa - 1);
    printf("pb value : %p \n", pb);
    printf("(pb + 1) value : %p \n", pb + 1);
    printf("pc value : %p \n", pc);
    printf("(pc + 1) value : %p \n", pc + 1);

    return 0;
}

/*
pa value : 0061FF10 
(pa + 1) value : 0061FF14   -> +4
pa value : 0061FF10
(pa - 1) value : 0061FF0C   -> -4
pb value : 0061FF0F
(pb + 1) value : 0061FF10   -> +1
pc value : 0061FF00
(pc + 1) value : 0061FF08   -> +8
*/