#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n=5;

    int *arr = calloc(n,sizeof(*arr));

    if(arr==NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;


}