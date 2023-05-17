#include <stdio.h>

int copy_str(char *dest, char *src);

struct Books {
    char name[30];
    char auth[30];
    char publ[30];
    int borrowed;
};

int main(){
    struct Books Harry_Potter;

    copy_str(Harry_Potter.name, "Harry Potter");
    copy_str(Harry_Potter.auth, "J.K Rolling");
    copy_str(Harry_Potter.publ, "Scholastic");
    Harry_Potter.borrowed = 0;

    printf("Book name : %s \n", Harry_Potter.name);
    printf("Auth name : %s \n", Harry_Potter.auth);
    printf("publ name : %s \n", Harry_Potter.publ);

    return 0;
}

int copy_str(char *dest, char *src) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';

    return 1;
}