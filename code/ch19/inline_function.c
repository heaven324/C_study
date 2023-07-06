#include <stdio.h>
__inline int square(int a) { return a * a; }    // ipad ide에서 실행이 안됨, 지원을 안하는 건가..

int main(int argc, char **argv) {
    printf("square(3) : %d", square(3));

    return 0;
}