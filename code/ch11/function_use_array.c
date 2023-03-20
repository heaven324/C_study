#include <stdio.h>

int max_number(int *parr);

int main() {
    int arr[10] = {1, 4, 2, 7, 5, 3, 9, 8, 6, 0};

    printf("array max value : %d \n", max_number(arr));

    return 0;
}

int max_number(int *parr) {
    int max = parr[0];

    for (int i = 0; i < 10; i++) {
        if (parr[i] > max) {
            max = parr[i];
        }
    }

    return max;
}