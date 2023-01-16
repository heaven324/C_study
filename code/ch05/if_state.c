#include <stdio.h>

int main() {
    int i;
    
    printf("input number : ");
    scanf("%d", &i);

    if (i == 7) {                   // if (조건문) {조건문이 참이면 실행} else if () {} else {조건문이 거짓이면 실행}
        printf("number is lucky 7 \n");
    } else {
        printf("number is just %d \n", i);
    }


    int height, weight;
    printf("당신의 키와 몸무게를 입력하세요 : ");
    scanf("%d %d", &height, &weight);

    if (height >= 190 || weight >= 100) {               // 논리(합, 곱)연산자 사용 가능.
        printf("당신은 '거구' 입니다. \n");
    } else if (!(height >= 190 || weight >= 100)) {     // !처리로 거짓일시 출력하게 가능.
        printf("당신은 거구가 아닙니다. \n");
    }


    double j, k;
    printf("나누고 싶은 두 정수를 입력 : ");
    scanf("%lf %lf", &j, &k);

    if (k == 0) {
        printf("0으로 나눌 수 없습니다. \n");
        return 0;                           // return 0;를 넣어서 조건문 안에서 함수를 종료시킬 수도 있음.
    }
    printf("%f를 %f로 나눈 값은 %f입니다. \n", j, k, j / k);

    return 0;
}