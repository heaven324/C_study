#include <stdio.h>

int main() {
    char input;

    printf("(lower) read alphabet\n");
    printf("alphabet: ");

    scanf("%c", &input);

    switch (input) {
        case 'a':
            printf("a \n");
            break;
        
        case 'b':
            printf("b \n");
            break;

        case 'c':
            printf("c \n");
            break;

        default:
            printf("Sorry, Can't read.. \n");
            break;
    }

    return 0;
}