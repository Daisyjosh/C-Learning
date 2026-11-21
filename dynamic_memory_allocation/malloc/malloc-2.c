#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void){
    size_t n;
    if(scanf("%zu",&n) != 1 || n == 0 || n > SIZE_MAX / sizeof(int)){
        printf("Invalid size.\n");
        return 1;
    }

    int *numbers = malloc(n*sizeof *numbers);

    if(numbers == NULL){
        printf("Allocation failed.\n");
        return 1;
    }

    for(size_t i = 0; i < n; i++){
        if(scanf("%d",&numbers[i])!=1){
            printf("Invalid input,\n");
            free(numbers);
            return 1;
        }
    }

    for(size_t i = 0; i < n; i++){
        printf("%d ",numbers[i]);
    }

    printf("\n");
    free(numbers);
    return 0;
}