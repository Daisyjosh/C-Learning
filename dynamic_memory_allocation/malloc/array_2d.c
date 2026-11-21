#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int rows=4;
    int columns=3;

    int (*arr)[columns] = malloc(rows*sizeof(*arr));

    if(arr==NULL){
        printf("Memory Allocation failed.\n");
        return 1;
    }
    free(arr);
    arr = NULL;
    return 0;
}