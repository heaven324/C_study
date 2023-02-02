#include <stdio.h>

int main() {
    int N, i = 2;

    printf("input N : ");
    scanf("%d", &N);
    printf("N = %d = ", N);
    while (N > 1) {
        if (N % i == 0) {
            printf("%d ", i);
            N /= i;
            if (N > 1) {
                printf("* ");
            }
            continue;
        } else {
            i++;
        }
    }
    printf("\n");

    return 0;
}


// 임의의 자연수 N 을 입력 받아 N 을 소인수 분해 한 결과를 출력하여라. 예를 들어서  N = 18 일 경우 N = 18 = 2 * 3 * 3