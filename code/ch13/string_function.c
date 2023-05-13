#include <stdio.h>

int copy_str(char *dest, char *src);
int stradd(char *dest, char *src);
int compare(char *str1, char *str2);

int main() {
    char str1[] = "hello";
    char str2[] = "hi";
    char str3[] = "hello my name is ";
    char str4[] = "Psi";
    char str5[] = "hello every1";
    char str6[] = "hello everyone";
    char str7[] = "hello every1 hi";
    char str8[] = "hello every1";

    printf("before copy : %s \n", str1);
    printf("before copy : %s \n", str2);

    copy_str(str1, str2);

    printf("after copy : %s \n", str1);
    printf("after copy : %s \n \n", str2);


    printf("before add : %s \n", str3);
    printf("before add : %s \n", str4);

    stradd(str3, str4);

    printf("after add : %s \n", str3);
    printf("after add : %s \n \n", str4);


    if (compare(str5, str6)) {
        printf("%s and %s is same \n", str5, str6);
    } else {
        printf("%s and %s is difference \n", str5, str6);
    }

    if (compare(str5, str7)) {
        printf("%s and %s is same \n", str5, str7);
    } else {
        printf("%s and %s is difference \n", str5, str7);
    }

    if (compare(str5, str8)) {
        printf("%s and %s is same \n", str5, str8);
    } else {
        printf("%s and %s is difference \n", str5, str8);
    }

    return 0;

}


int copy_str(char *dest, char *src) {
    /*
    src의 문자열을 dest로 복사한다. 단, dest의 크기가 반드시 src보다 커야한다.
    */
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';

    return 1;
}


int stradd(char *dest, char *src) {
    while (*dest) {
        dest++;
    }

    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

    return 1;
}


int compare(char *str1, char *str2) {
    while (*str1) {
        if (*str1 != *str2) {
            return 0;
        }
        str1++;
        str2++;
    }

    if (*str2 == '\0') return 1;
    
    return 0;
}