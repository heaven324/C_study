#include <stdio.h>

int main() {
    int a, b, c, d, e;
    a = b = c = d = e = 1;
    
    a = a + 1;
    printf("a : %d \n", a);
    b += 1;                 // 복합 대입 연산자(b = b + 1 쓰기 귀찮아서 씀, 연산자 우선순위 차이 있음)
    printf("b : %d \n", b);
    ++c;                    // 전위형 증감 연산자 1더한 후 리턴
    printf("c : %d \n", c);
    d++;                    // 후위형 증감 연산자 리턴 후 1더함
    printf("d : %d \n", d);

    printf("++e : %d \n", ++e); // 전위형이라 2 리턴
    e = 1;
    printf("e++ : %d \n", e++); // 후위형이라 1 리턴
    printf("e : %d \n", e);     // +1 반영된 값이 출력(2 리턴)
    return 0;
}