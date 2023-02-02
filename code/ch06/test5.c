#include <stdio.h>

int main() {
    int i, num = 2000, cnt = 1, result = 0;

    for (i = 1; i < num; i++) {
        if ( (num - i) % 2 == 0 ) {
            cnt = ((num - i) / 2) - i - 1;
        } else {
            cnt = ((num - i) / 2) - i;
        }
        
        if (cnt >= 1) {
            result += cnt;
        } else {
            break;
        }
    }
        printf("%d", result);

    return 0;
}

// 다음  식을  만족하는  자연수  a,b,c  의  개수를  구하여라.
// i) a  +  b  +  c  =  2000
// ii)  a  ＞  b  >  c,  a,b,c  는  모두  자연수