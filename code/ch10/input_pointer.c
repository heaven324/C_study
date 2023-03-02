#include <stdio.h>

int main() {
    int *p;
    int a;

    p = &a;
    
    printf("pointer value : %p \n", p);
    printf("int a address : %p \n", &a);

    return 0;
}