#include <stdio.h>

int multiply(int a, int b){
    return a*b;
}

int main(){
    int (*operation)(int,int);

    operation = multiply;
    printf("%d\n",operation(3,2)); // 6

    return 0;
}