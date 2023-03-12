#include <stdio.h>

int main() {
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *parr = arr;
    int *parr0 = &arr[0];

    printf("What is arr : %p \n", arr);
    printf("address of arr[0] : %p \n", &arr[0]);

    printf("sizeof(arr) : %d \n", sizeof(arr));
    printf("sizeof(parr) : %d \n", sizeof(parr));

    printf("arr[3] = %d, *(parr0 + 3) = %d \n", arr[3], *(parr0 + 3));

    printf("arr[3] : %d \n", arr[3]);
    printf("*(arr + 3) : %d \n", *(arr + 3));
    printf("3[arr] : %d \n", 3[arr]);
    printf("*(3 + arr) : %d \n", *(3 + arr));

    int test_arr[3][3] = {1, 4, 2, 5, 7, 8, 3, 9, 6};

    printf("test_arr[3][3] : %d \n", test_arr[3][3]);
    printf("*(*(test_arr + 3) + 3) : %d \n", *(*(test_arr + 3) + 3));

    return 0;
}


/*
What is arr : 0061FEF4 
address of arr[0] : 0061FEF4
sizeof(arr) : 40
sizeof(parr) : 4                // arr(배열) 과 parr(포인터)은 같지 않다.
arr[3] = 4, *(parr0 + 3) = 4
arr[3] : 4
*(arr + 3) : 4
3[arr] : 4
*(3 + arr) : 4
test_arr[3][3] : 4
*/