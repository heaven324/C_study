#include <stdio.h>

int main() {
    int i = 1, sum = 0;

    do {
        sum += i;
        i++;
    } while (i < 1);

    printf("sum : %d", sum);

    return 0;

}