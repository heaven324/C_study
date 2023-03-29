#include <stdio.h>

int Average(int *parr, int count);
int sort(int *parr, char *nameparr);
void int_swap(int *a, int *b);
void char_swap(char *a, char *b);

int main() {
    int arr[5][3];
    char people[5] = "ABCDE";
    int avg[5];
    int mean;
    char Pass_Fail[2] = "PF";

    for (int i = 0; i < 5; i++) {
        printf("input score %c \n", people[i]);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        avg[i] = Average(arr[i], 3);
    }
    mean = Average(avg, 5);
    printf("mean : %d \n", mean);
    sort(avg, people);
    for (int i = 0; i < 5; i++) {
        printf("%c : %2d, ", people[i], avg[i]);
        if (avg[i] < mean)
            printf("Fail \n");
        else
            printf("Pass \n");
    }

    return 0;
}


int Average(int *parr, int count) {
    int mean = 0;
    
    for (int i = 0; i < count; i++) {
        mean += parr[i];
    }
    return mean / count;
}


int sort(int *parr, char *nameparr) {
    int max = 0;
    int tmp = 0;

    for (int i = 0; i < 5; i++) {
        max = parr[i];
        tmp = i;
        for (int j = i + 1; j < 5; j++) {
            if (max < parr[j]) {
                max = parr[j];
                tmp = j;
            }
        int_swap(&parr[i], &parr[tmp]);
        char_swap(&nameparr[i], &nameparr[j]);
        }
    }
}


void int_swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


void char_swap(char *a, char *b) {
    char tmp = *a;
    *a = *b;
    *b = tmp;
}


/*
사용자로 부터 5 명의 학생의 수학, 국어, 영어 점수를 입력 받아서 평균이 가장 높은 사람 부터 
평균이 가장 낮은 사람까지 정렬되어 출력하도록 하세요. 특히, 평균을 기준으로 평균 이상인 사람 
옆에는 ’합격’, 아닌 사람은 ’불합격’ 을 출력하게 해보세요
*/