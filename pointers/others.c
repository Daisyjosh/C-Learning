#include <stdio.h>

struct Student{
    int roll_no;
    float mark;
};

union Data{
    int number;
};

int main(){
    // pointers to constant data
    // you can change where the pointer points
    // you cannot modify the integer through this pointer.
    int a = 10;
    int b = 20;

    const int *ptr = &a;
    ptr = &b; // valid
    // *ptr = 50; Not allowed

    // constatn pointers
    // you can modify the integer
    // cannot modify the pointer point somewhere
    int x = 10;
    int *const pptr = &x;

    *pptr = 50; //valid
    // pptr = &b; Not allowed

    // constant pointers to constant data - const int *const ptr
    // you cannot modify the value as well as the pointing place

    int y = 50;
    const int *const ppptr = &y;

    // ppptr = &z; not allowed
    // *ppptr = 100; not allowed

    // wild pointer - A wild pointer is an informal term for a pointer that has not been initialized to a valid pointer value.
    // int *ptr;
    // ptr contains an indeterminate value. You cannot assume that it points to a valid object.
    // solution : int *ptr = NULL;

    // Dangling pointer - A dangling pointer is a pointer whose target object has already ceased to exist or is no longer valid to access.

    // pointer to structure
    struct Student student = {100,95.5f};
    struct Student *struct_ptr = &student;

    printf("%d\n",struct_ptr->roll_no);
    struct_ptr->mark = 99.9f;
    printf("%.1f\n",(*struct_ptr).mark);


    // pointer to a union
    union Data d;
    union Data *union_ptr = &d;

    union_ptr->number = 100;
    (*union_ptr).number = 100;
    return 0;

}