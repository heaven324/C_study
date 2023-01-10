#include <stdio.h>

int main() {
    int a = 0xAF;            // 10101111
    int b = 0xB5;            // 10110101

    printf("%x \n", a & b);  // 10100101
    printf("%x \n", a | b);  // 10111111
    printf("%x \n", a ^ b);  // 00011010
    printf("%x \n", ~a);     // 1...1 01010000(저장되는 공간상에서 반전되는것임, int는 32bit)
    printf("%x \n", a << 2); // 1010111100(채워지는건 무조건 0으로)
    printf("%x \n", a >> 3); // 00010110(채워지는건 저장되는 공간상 맨 왼쪽 수가 채워짐)
    return 0;
}