#include <stdio.h>

int main() {
    int a;
    int b;
    const int *pa = &a;    // pa가 가리키는 변수 값이 변하면 안된다는 정의 (실제값)
    // int const *pa = &a; // pa에 저장된 값이 변하면 안된다는 의미 (주소값)

    // *pa = 3;
    pa = &b;

    return 0;
}