#include <stdio.h>

int main(void){
    int arr[] = {10,20,30,40};
    int *ptr = arr;

    printf("%d\n",*ptr); // 10

    ptr++;

    printf("%d\n",*ptr); // 20

    ptr+=2;

    printf("%d\n",*ptr); // 40

    ptr--;

    return 0;
}