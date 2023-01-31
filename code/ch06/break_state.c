#include <stdio.h>

int main() {
    int usranswer;

    printf("컴퓨터가 생각한 숫자를 맟추어 보세요! \n");

    for (;;) {
        scanf("%d", &usranswer);
        if (usranswer == 3) {
            printf("맞추셨군요! \n");
            break;
        } else {
            printf("툴렸어요! \n");
        }
    }
}