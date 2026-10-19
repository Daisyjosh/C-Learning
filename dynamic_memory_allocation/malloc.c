#include <stdio.h>
#include <stdlib.h>

int main(void){

    // INTEGER
    int *ptr = malloc(sizeof *ptr);
    // ptr is a pointer variable, typically stored in a local variable's stack frame or a register.
    // The memory returned by malloc() is dynamically allocated storage, commonly described as heap memory.

    if(ptr == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }

    *ptr = 25;

    printf("Value = %d\n",*ptr);

    free(ptr);
    ptr = NULL;

    // ARRAY
    int *marks = malloc(5 * sizeof * marks);
    if(marks == NULL){
        printf("Allocation failed.\n");
        return 1;
    }

    marks[0] = 80;
    marks[1] = 90;
    marks[2] = 75;
    marks[3] = 85;
    marks[4] = 95;

    for(int i = 0; i < 5; i++){
        printf("%d ",marks[i]);
    }
    printf("\n");
    free(marks);
    return 0;
}