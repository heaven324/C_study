#include <stdio.h>

int main() {
    int *p;
    int a;

    p = &a;
    *p = 3;

    printf("a is : %d \n", a);
    printf("*p is : %d \n", *p);

    return 0;
}