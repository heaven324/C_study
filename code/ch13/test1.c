#include <stdio.h>


int reverse_str(char *str1, char *str2);

int main() {
    char str[100] = "abcde";
    char result[100];
    printf("before : %s \n", str);

    reverse_str(str, result);

    printf("after : %s", result);

    return 0;
}


int reverse_str(char *str1, char *str2) {
    int cnt = 0;
    while (*(str1 + cnt)) {
        cnt++;
    }

    *(str2 + cnt) = '\0';

    for (int x = 0; x < cnt; x++) {
        *(str2 + x) = *(str1 + (cnt - x - 1));
    }

    return 1;
}

/*
`
길이가 최대 100인 문자열을 하나 입력 받아서 문자열을 역순으로 출력하는 함수를 만들어 보세요.
*/