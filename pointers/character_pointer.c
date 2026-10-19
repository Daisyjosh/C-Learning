#include <stdio.h>

int main(){
    char grade = 'A';
    char *ptr = &grade;

    printf("%c\n",grade);

    *ptr = 'B';
    printf("%c\n",grade);

    return 0;
}