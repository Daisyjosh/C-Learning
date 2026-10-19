#include <stdio.h>

int main(void){
    int number = 100;
    int *ptr = &number;

    printf("%d\n",number);

    *ptr = 200;
    printf("%d\n",number);

    return 0;
}