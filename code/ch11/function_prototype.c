#include <stdio.h>

int swap(int *i, int *j);

int main() {
    int i = 3, j = 5;

    printf("before swap : i = %d, j = %d \n", i, j);

    swap(&i, &j);

    printf("after  swap : i = %d, j = %d \n", i, j);

    return 0;
}

int swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;

    return 0;
}