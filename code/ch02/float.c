#include <stdio.h>

int main() {
    float a = 3.141592f;      // f룰 붙이지 않으면 double로 인식함.
    double b = 3.141592;
    int c = 123;
    printf("a : %f \n", a);   // %f 실수형 변수 출력(소수점을 항상 붙여야 함)
    printf("b : %f \n", b);
    printf("a : %.2f \n", a); // 소수점 이하 둘째 자리까지만 출력
    printf("c : %5d \n", c);  //  숫자의 자리수를 5자리로 맟추기
    printf("b : %6.3f \n", b);
    return 0;
}