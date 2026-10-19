#include <stdio.h>

int main(){
    int age = 21;
    float discount = 12.5f;

    int *null_ptr = NULL;
    void *ptr;

    ptr = &age;
    printf("%d\n",age);

    ptr = &discount;
    printf("%.1f\n",discount);

    if(null_ptr == NULL){
        printf("Pointer is Null.\n");
    }
    return 0;
}