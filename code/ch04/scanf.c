/* 섭씨온도를 화씨로 바꾸기 */
#include <stdio.h>

int main() {
    double celsius;
    
    printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램입니다. \n");
    printf("섭씨 온도를 입력해 주세요 : ");
    scanf("%lf", &celsius);

    printf("섭씨 %f도는 화씨로 %f도 입니다. \n", celsius, 9 * celsius / 5 + 32);
    printf("섭씨 %f도는 화씨로 %f도 입니다. \n", celsius, 9 / 5 * celsius + 32);  // 9 / 5 에서 둘다 int형이기 때문에 소수점 버려짐.

    char ch;
    short sh;
    int i;
    long lo;
    float fl;
    double du;

    printf("input char : ");
    scanf(" %c", &ch);          // 입력 버퍼 오류를 없애기 위해 공백("white space") 추가 %*c로도 비울 수 있음.

    printf("input short : ");
    scanf("%hd", &sh);
    
    printf("input int : ");
    scanf("%d", &i);
    
    printf("input long : ");
    scanf("%ld", &lo);
    
    printf("input float : ");
    scanf("%f", &fl);
    
    printf("input double : ");
    scanf("%lf", &du);
    
    printf("char : %c, short : %d, int : %d,", ch, sh, i);
    printf("long : %ld, float : %f, double : %f \n", lo, fl, du);

    return 0;
}