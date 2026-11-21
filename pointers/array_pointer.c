#include <stdio.h>
#include <stdlib.h>

int main(void){
    int arr[] = {10,20,30,40,50};

    int *ptr = arr;


    // ways to access array elements

    printf("%d\n",arr[0]);
    printf("%d\n",*ptr);
    printf("%d\n",2[arr]);
    printf("%d\n",*(2+arr));
    printf("%d\n",*(ptr+1));
    printf("%d\n",*(arr+2));

    int arr1[5] = {10,20,30,40,50};

    int (*ptr1)[5] = &arr1; // pointer to an array

    printf("%d\n",(*ptr1)[0]);
    printf("%d\n",(*ptr1)[1]);

    int a=10,b=2,c=30;

    int *ptr2[3];

    ptr2[0]=&a;
    ptr2[1]=&b;
    ptr2[2]=&c;

    return 0;
}