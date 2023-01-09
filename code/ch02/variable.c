#include <stdio.h>

int main()
{
    int a;
    a = 127; // 변수에 값 할당
    printf("a의 값은 %d 진수로 %o 입니다. \n", 8, a); // 8진수 출력
    printf("a의 값은 %d 진수로 %d 입니다. \n", 10, a); // 10진수 출력
    printf("a의 값은 %d 진수로 %x 입니다. \n", 16, a); // 16진수 출력
    return 0;
}