#include <stdio.h>

void swap(int *pm, int *pn);

int main() {
    int m, n, temp, gcd;

    scanf("%d %d", &m, &n);
    if (m < n) {
        swap(&m, &n);
    }

    do {
        temp = m % n;
        if (temp == 0){
            gcd = n;
         } else {
            m = n;
            n = temp; 
         }
    } while (temp > 0);

    printf("%d\n", gcd);

    return 0;
}

void swap(int *pm, int *pn) {
    int temp = *pm;
    *pm = *pn;
    *pn = temp;
}