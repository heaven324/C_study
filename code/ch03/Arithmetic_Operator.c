#include <stdio.h>

int main() {
    int a, b;
    double c;
    a = 10;
    b = 3;
    c = 3;
    printf("a + b = %d \n", a + b);
    printf("a - b = %d \n", a - b);
    printf("a * b = %d \n", a * b);
    printf("a / b = %d \n", a / b);  // int형은 정수부분만 남김
    printf("a %% b = %d \n", a % b); // 오직 정수형 데이터만 연산 가능
    printf("a / c = %f \n", a / c);  // 산술변환됨(숫자의 범위가 더 큰 자료형으로 변환됨)
    printf("c / a = %f \n", c / a);
    return 0;
}