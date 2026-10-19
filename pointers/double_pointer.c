#include <stdio.h>

int main(){
    double mark = 99.99;
    double *ptr = &mark;

    printf("%.2f\n",*ptr);
    return 0;
}