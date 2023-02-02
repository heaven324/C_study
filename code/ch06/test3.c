#include <stdio.h>

int main() {
    int n = 1, n1 = 0, n2 = 0, sum = 0;

    do {
        sum += n;
        n2 = n1;
        n1 = n;
        n = n1 + n2;
    } while (n <= 1000000);

    printf("%d", sum);

    return 0;
}


// 1000000 이하의 피보나치 수열 ( N 번째 항이 N - 1 번째 항과 N - 2번째 항으로 표현되는 수열, 시작은 1,1,2,3,5,8,...) 의 짝수 항들의 합을 구한다.