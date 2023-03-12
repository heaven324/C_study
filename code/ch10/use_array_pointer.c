#include <stdio.h>

int main() {
    int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};

    int* parr = arr;
    int sum = 0;

    while (parr - arr <= 9) {
        sum += (*parr);
        parr++; // arr++로 연산하게 되면(포인터 타입으로만 변경) 단순 주소값이되어서 +1 연산이 안됨
    }

    printf("Average my score : %d", sum / 10);

    return 0;
}