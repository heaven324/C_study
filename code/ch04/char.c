#include <stdio.h>

int main() {
    char a;
    a = '\''; // 문자를 대입할 때는 작은따옴표('')로 묶어야 한다.

    printf("a 의 값과 들어가는 문자는? 값 : %d, 문자 : %c \n", a, a);
    return 0;
}