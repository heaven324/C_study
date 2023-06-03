#include <stdio.h>

int function1() {
    static int how_many_called = 0;

    how_many_called++;
    printf("function 1 called : %d \n", how_many_called);

    return 0;
}

int function2() {
    static int how_many_called = 0;

    how_many_called++;
    printf("function 2 called : %d \n", how_many_called);

    return 0;
}

int main() {
    function1();
    function2();
    function1();
    function2();
    function2();
    function2();
    function1();
    function1();
    function1();
    function2();
    return 0;
}