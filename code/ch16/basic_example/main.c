#include <stdio.h>
#include "str.h"

int main() {
    char str1[20] = "hello";
    char str2[20] = "hi";

    if (compare(str1, str2)) {
        printf("%s and %s is same! \n", str1, str2);
    } else {
        printf("%s and %s is not same! \n", str1, str2);
    }

    return 0;
}