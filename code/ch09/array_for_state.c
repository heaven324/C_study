#include <stdio.h>

int main() {
    int i, arr[10] = {2, 10, 30, 21, 34, 23, 53, 21, 9, 1};
    for (i = 0; i < 10; i++) {
        printf("Array element %d : %d \n", i, arr[i]);
    }

    return 0;
}