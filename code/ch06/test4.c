#include <stdio.h>

int main() {
    int i, n, result = 1;

    printf("input : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        result *= i;
    }
    printf("%d", result);
    
    return 0;
}

// 사용자로 부터 N값을 입력 받고 1 부터 N까지의 곱을 출력한다.