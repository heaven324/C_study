#include <stdio.h>

int main() {
    int i, sum = 0;
    for (i = 1; i <= 10000; i++) {
        sum = sum + i;
    }
    printf("1 부터 10000까지의 합 : %d \n", sum);

    // 응용
    int j;
    int subject, score;
    double sum_score = 0;

    printf("몇 개의 과목 점수를 입력 받을 것인가요?");
    scanf("%d", &subject);

    printf("\n 각 과목의 점수를 입력해 주세요 \n");
    for (j = 1; j <= subject; j++) {
        printf("과목%d : ", j);
        scanf("%d", &score);
        sum_score = sum_score + score;
    }
    printf("전체 과목의 평균은 : %.2f \n", sum_score / subject);

    return 0;
}