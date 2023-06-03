#include <stdio.h>
#define VAR 10
#define A

int main() {
    char arr[VAR] = "hi";
    printf("%s \n", arr);

    #ifdef A
    printf("AAAA \n");
    #endif

    #ifdef B
    printf("BBBB \n");
    #endif
    
    return 0;
}