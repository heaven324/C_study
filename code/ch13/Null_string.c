#include <stdio.h>

int main() {
    char Null_1 = '\0';
    char Null_2 = 0;
    char Null_3 = (char)NULL;

    char not_Null = '0';

    printf("integer NULL : %d, %d, %d\n", Null_1, Null_2, Null_3);
    printf("'0' is : %d", not_Null);

    return 0;
}