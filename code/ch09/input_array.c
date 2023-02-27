#include <stdio.h>

int main() {
    int arr[5];
    int i, ave = 0;

    for (i = 0; i < 5; i++) {
        printf("%d student score : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i <5; i++) {
        ave = ave + arr[i];
    }

    printf("average score : %d \n", ave / 5);
}