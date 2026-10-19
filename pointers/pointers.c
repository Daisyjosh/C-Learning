#include <stdio.h>

void change_pointer(int **p){
    static int new_value = 200;
    *p = &new_value;
}

int main(void){
    int age = 21;
    int *ptr = &age; // age pointer
    int **pptr = &ptr;

    printf("age = %d\n",age); // age
    printf("address of age = %p\n",(void *)&age); // address of age
    printf("ptr = %p\n",(void *)ptr); // address of age stored in pointer
    printf("value through ptr = %d\n",*ptr); // value present in the stored address
    printf("address of age_pointer = %p\n",(void *)pptr); // address of ptr
    printf("pointer to pointer value = %d\n",*pptr); // value present in ptr

    // pointer to pointer example
    int number = 100;
    int *p = &number;
    
    change_pointer(&p);

    printf("%d\n",number);

    // array of pointers
    int a = 10;
    int b = 20;
    int *ptrs[2] = {&a,&b};

    printf("%d\n",*ptrs[0]);
    printf("%d\n",*ptrs[1]);

    // pointer to an array
    int numbers[3] = {10,20,30};
    int (*ptr_arr)[3] = &numbers;

    printf("%d\n",*ptr_arr[0]);
    printf("%d\n",*ptr_arr[1]);
    printf("%d\n",*ptr_arr[1]);

    return 0;
}