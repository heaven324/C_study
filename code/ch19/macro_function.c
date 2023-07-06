#include <stdio.h>
#define square(x) x *x
#define square1(x) (x)*(x)
#define PrintVariableName(var) printf(#var "\n");
#define addName(x, y) x##y

int main(int argc, char **argv) {
    int a;
    int addName(a, b);

    ab = 3;

    printf("square(3) : %d \n", square(3));         // 9  <- 3 * 3
    printf("square(3) : %d \n", square(3+1));       // 7  <- 3 + 1*3 + 1
    printf("square(3) : %d \n", square1(3+1));      // 16 <- (3+1) * (3+1)

    PrintVariableName(a);

    printf("%d \n", ab);

    return 0;
}