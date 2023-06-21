#include <stdio.h>

int main(int argc, char **argv) {
    int i;
    printf("num of argument : %d \n", argc);

    for (i = 0; i < argc; i++) {
        printf("argument : %s \n", argv[i]);
    }

    return 0;
}