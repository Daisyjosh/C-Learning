#include <stdio.h>

int main(void){
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // ways to access array elements
    printf("%d\n",arr[1][0]);
    printf("%d\n",*(*(arr+1)+0));

    // pointer declaration for a 2d array

    int (*ptr)[4] = arr;
    printf("%d\n", ptr[0][0]);
    printf("%d\n", ptr[1][2]);
    printf("%d\n", ptr[2][3]);

    printf("%d\n", *(*(ptr + 1) + 2));
    int row1[4] = {1, 2, 3, 4};
    int row2[4] = {5, 6, 7, 8};
    int row3[4] = {9, 10, 11, 12};

    int *arr_ptr[3];

    arr_ptr[0] = row1;
    arr_ptr[1] = row2;
    arr_ptr[2] = row3;

    printf("%d\n",arr_ptr[1][2]);

    // double pointer

    int arr_d[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int **ptr_d = (int **)arr_d;

    printf("%d", ptr_d[1][2]);

    return 0;
 }