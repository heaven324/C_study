#include <stdio.h>

void add_one(int* p) {
    (*p) += 1;
}

int main() {
    int a = 1;
    void *x;        // 무었이든 올 수 잇는 void pointer 변수 선언
    double y = 123.3;

    printf("Before : %d \n", a);
    add_one(&a);
    printf("after : %d \n", a);

    x = &y;

    printf("%lf \n", *(double *)x);     //선언된 pointer가 어떤 형인지 모르니 지정해서 출력
    
    return 0;
}