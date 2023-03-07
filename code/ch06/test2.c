#include <stdio.h>

int main() {
    int i, result = 0;

    for (i = 1; i <= 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            result += i;
        }
    }
    printf("answer : %d", result);

    return 0;
}

// 1000이하의 3 또는 5의 배수인 자연수들의 합을 구한다.