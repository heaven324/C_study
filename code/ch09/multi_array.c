#include <stdio.h>

int main() {
    // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};     // 둘중 어떻게 써도 상관 없음.
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("arr 2, 3 : %d \n", arr[1][2]);
    printf("arr 1, 2 : %d \n", arr[0][1]);
    
    

    return 0;
}