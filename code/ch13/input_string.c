#include <stdio.h>

int main() {
    char words[30];

    printf("input sentence (max=30) : ");
    
    scanf("%s", words);

    printf("string : %s \n", words);

    return 0;
}