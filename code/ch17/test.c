#include <stdio.h>
#include <stdlib.h>

int calculate(int a, char *x, int b);

int main(int argc, char **argv) {
    int i;
    int a = atoi(argv[1]);
    int b = atoi(argv[3]);
    int result = calculate(a, argv[2], b);
    printf("%d \n", result);

    return 0;
}

int calculate(int a, char *x, int b) {
    printf("char : %d \n\n", *x);
    if (*x == 43) {
        return a + b;
    } else if (*x == 45) {
        return a - b;
    } else if (*x == 42) {
        return a * b;
    } else if (*x == 47) {
        return a / b;
    }
    return 0;
}