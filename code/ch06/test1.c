#include <stdio.h>

int main() {
    char star = '*';
    int N, i, j;

    printf("input N : ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= (i * 2) - 1; j++) {
            printf("%c", star);
        }
        printf("\n");
    }

    printf("\n");

    for (i = N; i >= 1; i--) {
        for (j = 1; j <= (i * 2) - 1; j++) {
            printf("%c", star);
        }
        printf("\n");
    }

    return 0;
}



// N 줄인 삼각형과 역삼각형을 출력한다. 단, 사용자로 부터 임의의 N을 입력 받는다. 아래는 N = 3 일 때의 출력 예시 이다.
// * *** *****
// ***** *** *