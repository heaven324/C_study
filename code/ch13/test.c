#include <stdio.h>

int main() {
    char str_a[] = "abc";
    char str_b[] = "abd";
    int i = 0, state = 0;

    while (str_a[i] != 0) {
        if (str_a[i] != str_b[i]) {
            state = 1;
            break;
        }
        i++;
    }

    if (state == 1) {
        printf("not same");
    } else {
        printf("same");
    }

    return 0;

}

// 두 개의 문자열을 비교하는 함수를 만들어서 같으면 1, 다르면 0 을 리턴하게 해보세요.